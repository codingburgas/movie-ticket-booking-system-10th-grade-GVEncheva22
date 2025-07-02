#include "../include/startingScreen.h"
#include "../include/authScreens.h"
#include <iostream>
using namespace std;

void mainMenu() {
    bool running = true;

    while (running) {
        clearScreen();
        cout << "=== MAIN MENU ===\n";
        cout << "1. View Available Movies\n";
        cout << "2. Logout\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";

        int option;
        cin >> option;

        switch (option) {
        case 1:
            clearScreen();
            cout << "Displaying movies... \n";
            //  displayMovies();
            system("pause");
            break;
        case 2:
            clearScreen();
            displayStartingScreen();
            running = false;
            break;
        case 3:
            running = false;
            break;
        default:
            cout << "Invalid option! Try again.\n";
            system("pause");
        }
    }
}

void runApp() {
    displayStartingScreen();
    mainMenu();
}