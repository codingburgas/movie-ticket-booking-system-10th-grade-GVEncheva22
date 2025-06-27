#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool userExists(const string& username)
{
    ifstream file("users/" + username + ".txt");
    return file.good();
}

void saveUser(const string& username, const string& password)
{
    ofstream file("users/" + username + ".txt");
    if (file.is_open())
    {
        file << password << endl;
        file.close();
        cout << "User saved successfully!" << endl;
    }
    else
    {
        cout << "Error saving user data!" << endl;
    }
}

void displaySignUp()
{
    string username, password;
    cout << "Enter username: ";
    cin >> username;

    if (userExists(username))
    {
        cout << "This username already exists! Please try another one." << endl;
        system("pause");
        return;
    }

    cout << "Enter password: ";
    cin >> password;

    saveUser(username, password);

    cout << "Sign up successful! You can now log in." << endl;
    system("pause");
}
