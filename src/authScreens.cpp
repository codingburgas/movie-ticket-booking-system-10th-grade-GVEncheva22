#include "../include/authScreens.h"
#include "../include/signUp.h"
#include "../include/login.h"
#include <iostream>
using namespace std;

void clearScreen() {
    system("cls");
}

void displaySignUp() {
    clearScreen();

    string username, password;
    bool success = false;

    while (!success) {
        cout << "Enter new username: ";
        cin >> username;

        if (userExists(username)) {
            cout << "Username already taken! Please try another." << endl;
            continue;
        }

        cout << "Enter new password: ";
        cin >> password;

        saveUser(username, password);
        cout << "Registration successful!" << endl;
        success = true;
    }

    system("pause");
}

void displayLogin() {
    clearScreen();

    bool loggedIn = false;
    while (!loggedIn) {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (checkLogin(username, password)) {
            cout << "Login successful!" << endl;
            loggedIn = true;
        }
        else {
            cout << "Invalid username or password! Please try again." << endl;
        }
    }

    system("pause");
}