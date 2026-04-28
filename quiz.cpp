#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

// ==============================
//        BASE CLASS
// ==============================
class Question {
public:
    virtual void display(int qNo) = 0;
    virtual bool checkAnswer(int ans) = 0;
    virtual ~Question() {}
};

// ==============================
//       DERIVED CLASS
// ==============================
class MCQQuestion : public Question {
private:
    string question;
    string options[4];
    int correct;

public:
    // Returns true if loaded successfully
    bool load(ifstream &file) {
        if (!getline(file, question)) return false;
        if (question.empty()) {
            if (!getline(file, question)) return false;
        }

        for (int i = 0; i < 4; i++) {
            if (!getline(file, options[i])) return false;
        }

        string correctStr;
        if (!getline(file, correctStr)) return false;
        correct = stoi(correctStr);

        return true;
    }

    void display(int qNo) override {
        cout << "\n------------------------------------------\n";
        cout << "Q" << qNo << ". " << question << "\n";
        cout << "------------------------------------------\n";
        for (int i = 0; i < 4; i++) {
            cout << "  " << (i + 1) << ". " << options[i] << "\n";
        }
    }

    bool checkAnswer(int ans) override {
        return ans == correct;
    }

    int getCorrect() {
        return correct;
    }
};

// ==============================
//       MANAGER CLASS
// ==============================
class QuizManager {
private:
    MCQQuestion questions[50];
    int count  = 0;
    int score  = 0;

    void printHeader() {
        cout << "\n==========================================\n";
        cout << "       C++ KNOWLEDGE QUIZ CHALLENGE       \n";
        cout << "==========================================\n";
        cout << "  Test your C++ programming knowledge!   \n";
        cout << "==========================================\n\n";
    }

    void printResult() {
        cout << "\n==========================================\n";
        cout << "             QUIZ COMPLETE!               \n";
        cout << "==========================================\n";
        cout << "  Total Questions : " << count << "\n";
        cout << "  Correct Answers : " << score << "\n";
        cout << "  Wrong Answers   : " << (count - score) << "\n";
        cout << "  Your Score      : " << score << " / " << count << "\n";
        cout << "  Percentage      : " << (score * 100 / count) << "%\n";
        cout << "------------------------------------------\n";

        int pct = score * 100 / count;
        if (pct == 100)
            cout << "  Result : OUTSTANDING! Perfect Score! \n";
        else if (pct >= 80)
            cout << "  Result : EXCELLENT! Well done!\n";
        else if (pct >= 60)
            cout << "  Result : GOOD! Keep practicing.\n";
        else if (pct >= 40)
            cout << "  Result : AVERAGE. Revisit the topics.\n";
        else
            cout << "  Result : NEEDS IMPROVEMENT. Keep learning!\n";

        cout << "==========================================\n\n";
    }

public:
    void loadQuestions(const string &filename) {
        ifstream file(filename);

        if (!file.is_open()) {
            cout << "\n[ERROR] Cannot open \"" << filename << "\".\n";
            cout << "Make sure questions.txt is in the same folder.\n\n";
            return;
        }

        count = 0;
        while (count < 50) {
            if (!questions[count].load(file)) break;
            count++;
        }

        file.close();

        if (count == 0) {
            cout << "[ERROR] No questions loaded. Check file format.\n";
        } else {
            cout << "[INFO] " << count << " questions loaded successfully.\n";
        }
    }

    void startQuiz() {
        if (count == 0) {
            cout << "No questions available. Exiting.\n";
            return;
        }

        printHeader();
        cout << "Total Questions: " << count << "\n";
        cout << "Press ENTER to start...";
        cin.ignore();
        cin.get();

        score = 0;
        int ans = 0;

        for (int i = 0; i < count; i++) {
            questions[i].display(i + 1);

            cout << "\nYour Answer (1-4): ";
            while (!(cin >> ans) || ans < 1 || ans > 4) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "  Invalid! Enter a number between 1 and 4: ";
            }

            if (questions[i].checkAnswer(ans)) {
                cout << "  >> Correct! Great job!\n";
                score++;
            } else {
                cout << "  >> Wrong! Correct answer was: "
                     << questions[i].getCorrect() << "\n";
            }
        }

        printResult();
    }
};

// ==============================
//           MAIN
// ==============================
int main() {
    QuizManager quiz;

    quiz.loadQuestions("questions.txt");
    quiz.startQuiz();

    cout << "Press ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
