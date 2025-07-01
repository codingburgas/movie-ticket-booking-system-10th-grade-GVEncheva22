#pragma once
#include "hall.h"
#include <string>
using namespace std;

class Cinema {
private:
    string name;
    string city;
    static const int maxHalls = 5;
    Hall halls[maxHalls];
    int hallCount;

public:
    Cinema(string name, string city);

    bool addHall(int hallNumber, int totalSeats);
    void displayCinemaInfo() const;
    int getHallCount() const;
};
