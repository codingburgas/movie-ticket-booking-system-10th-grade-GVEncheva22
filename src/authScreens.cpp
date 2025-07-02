#include "../include/authScreens.h"
#include "../include/signUp.h"
#include "../include/login.h"
#include <iostream>
using namespace std;

void clearScreen() {
    system("cls");
}

void showSignUpScreen() {
    displaySignUp();
}

void showLoginScreen() {
    clearScreen();

    bool loggedIn = false;
    while (!loggedIn) {
        loggedIn = displayLogin();
    }
}