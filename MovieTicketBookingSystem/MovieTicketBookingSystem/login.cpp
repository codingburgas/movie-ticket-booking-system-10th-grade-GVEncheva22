#include "login.h"
#include <iostream>
#include <fstream>
using namespace std;

bool checkLogin(const string& username, const string& password)
{
    ifstream file("userData.txt");
    string fileUser, filePass;

    if (!file.is_open())
    {
        cout << "Error opening file!" << endl;
        return false;
    }

    while (file >> fileUser >> filePass)
    {
        if (fileUser == username && filePass == password)
        {
            return true;
        }
    }
    return false;
}

bool displayLogin()
{
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (checkLogin(username, password))
    {
        cout << "Login successful!" << endl;
        system("pause");
        return true;
    }
    else
    {
        cout << "Invalid username or password!" << endl;
        system("pause");
        return false;
    }
}
