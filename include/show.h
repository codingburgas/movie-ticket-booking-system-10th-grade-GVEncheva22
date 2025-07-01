#pragma once
#include "hall.h"
#include <string>
using namespace std;

class Show {
private:
    string movieTitle;
    string showTime;
    Hall* hall;

public:
    Show(string title, string time, Hall* hall);

    void displayShowInfo() const;
    bool bookSeat(int seatNumber);
};
