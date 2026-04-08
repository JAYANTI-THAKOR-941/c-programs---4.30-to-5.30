// multiple inheritance
#include <iostream>
using namespace std;

class userInfo
{
    string username;
    string password;

protected:
    string role;

public:
    void getUserInfo()
    {
        cout << "Enter username:";
        getline(cin, username);
        cout << "Enter password:";
        getline(cin, password);
        cout << "Enter role:";
        getline(cin, role);
    }

    void displayUserInfo()
    {
        cout << "\nusername:" << username << endl;
        cout << "password:" << password << endl;
        cout << "role:" << role << endl;
    }
};

class productManagement : public userInfo
{
    int productId;
    string productName;
    int productPrice;
    string category;

public:
    void addProduct()
    {
        if (role == "admin")
        {
            cout << "\nEnter productId:";
            cin >> productId;
            cin.ignore();

            cout << "Enter productName:";
            getline(cin, productName);

            cout << "Enter productPrice:";
            cin >> productPrice;

            cout << "Enter productCategory:";
            cin >> category;
        }
        else
        {
            cout << "Access Denied..\nYou are not an admin.!";
        }
    }

    void displayProductInfo()
    {
        if (role == "admin")
        {
            cout << "\nproductId:" << productId << endl;
            cout << "productName:" << productName << endl;
            cout << "productPrice:" << productPrice << endl;
            cout << "Category:" << category << endl;
        }
    }
};
// class dashboard{

// };

int main()
{

    productManagement p;
    p.getUserInfo();
    p.addProduct();

    p.displayUserInfo();
    p.displayProductInfo();
    return 0;
}