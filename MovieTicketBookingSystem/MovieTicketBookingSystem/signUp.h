#pragma once
#include <string>

bool userExists(const std::string& username);
void saveUser(const std::string& username, const std::string& password);
void displaySignUp();
