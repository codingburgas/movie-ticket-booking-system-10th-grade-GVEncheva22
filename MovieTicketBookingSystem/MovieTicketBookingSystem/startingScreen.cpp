#include "startingScreen.h"
#include "pch.h"
#include <iostream>
#include <string>
using namespace std; 

// Display the starting screen with options to sign up or log in
void displayStartingScreen()
{
    string resetColor = "\033[37m";   // White 
    string cyanColor = "\033[36m";    // Cyan

    const string title[11] = {
    "",
    "   ____ _                            ",
    "  / ___(_)_ __   ___ _ __ ___   __ _ ",
    " | |   | | '_ \\ / _ \\ '_ ` _ \\ / _` |",
    " | |___| | | | |  __/ | | | | | (_| |",
    "  \\____|_|_| |_|\\___|_| |_| |_|\\__,_|",
    "",
    "",
    "",
    "",
    ""
    };


    printEndl(2);

    for (int i = 0; i < 7; i++)
    {
        centerText(cyanColor + title[i] + resetColor);
        cout << endl;
    }

    printEndl(3);

    centerText("Select an option:");
    printEndl(1);

    centerText("1. SIGN UP");
    centerText("2. LOGIN");

    chooseAnswer();

    printEndl(2);
}

// Handle the user's choice to sign up or log in
void chooseAnswer()
{
    string redColor = "\033[31m";     // Red
    string resetColor = "\033[37m";   // White 

    int choice;
    bool isValid = false;

    while (!isValid)
    {
        cout << endl;
        printStrRepeat(" ", 2);
        cout << "Your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 1)
        {
            isValid = true;
            clearScreen();
            displaySignUp();
        }
        else if (choice == 2)
        {
            isValid = true;
            clearScreen();
            displayLogin();
        }
        else
        {
            cout << redColor << "Invalid choice! Choose 1 to SIGN UP or 2 to LOGIN" << resetColor << endl;
        }
    }
}
