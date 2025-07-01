#include "../include/signUp.h"
#include <iostream>
#include <fstream>
using namespace std;

bool userExists(const string& username)
{
    ifstream file("userData.txt");
    string fileUsername, filePassword;
    if (!file.is_open())
        return false;

    while (file >> fileUsername >> filePassword)
    {
        if (fileUsername == username)
            return true;
    }
    return false;
}

void saveUser(const string& username, const string& password)
{
    ofstream file("userData.txt", ios::app);
    if (file.is_open())
    {
        file << username << " " << password << endl;
        file.close();
    }
    else
    {
        cout << "Error opening file for saving user!" << endl;
    }
}

void displaySignUp()
{
    string username, password;

    cout << "Enter new username: ";
    cin >> username;

    if (userExists(username))
    {
        cout << "Username already taken! Please try another." << endl;
        system("pause");
        return;
    }

    cout << "Enter new password: ";
    cin >> password;

    saveUser(username, password);

    cout << "Registration successful!" << endl;
    system("pause");
}