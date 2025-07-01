#pragma once
#include <string>
using namespace std;

bool userExists(const string& username);
void saveUser(const string& username, const string& password);
void displaySignUp();