#include "login.h"
#include <iostream>
#include <fstream>
using namespace std;

bool displayLogin()
{
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file("userData.txt");
    string fileUser, filePass;
    bool loggedIn = false;

    if (file.is_open())
    {
        while (file >> fileUser >> filePass)
        {
            if (fileUser == username && filePass == password)
            {
                loggedIn = true;
                break;
            }
        }
        file.close();
    }
    else
    {
        cout << "Error opening file!" << endl;
        return false;
    }

    if (loggedIn)
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
