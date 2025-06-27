#pragma once
#include "hall.h"
#include <string>
using namespace std;

class Cinema {
private:
    string name;
    string city;
    const int maxHalls = 5;  
    Hall halls[5];
    int hallCount;

public:
    Cinema();
    Cinema(string name, string city);

    bool addHall(const Hall& hall);
    void displayCinemaInfo() const;
    int getHallCount() const;
};
