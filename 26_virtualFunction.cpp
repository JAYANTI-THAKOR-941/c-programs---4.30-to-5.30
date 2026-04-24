#include <iostream>
using namespace std;

class Cricket
{
public:

    // pure virtual function
    virtual void getTotalOver(){}
};

class T20Match : public Cricket
{
public:
    void getTotalOver()
    {
        cout << "T20 Match Total Over : 20 Over." << endl;
    }
};

class TestMatch : public Cricket
{
public:
    void getTotalOver()
    {
        cout << "Test Match Total Over : 50 Over." << endl;
    }
};

int main()
{
    Cricket *c;

    T20Match t20;

    c = &t20;
    c->getTotalOver();

    TestMatch test;

    c = &test;
    c->getTotalOver();
    return 0;
}