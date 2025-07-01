#pragma once
#include <iostream>
using namespace std;

class Hall {
public:
    int hallNumber;
    int totalSeats;
    bool* seats;

    Hall();
    Hall(int hallNumber, int totalSeats);

    void displaySeats();
    bool bookSeat(int seatNumber);
    void displayHallInfo() const;
};
