#pragma once
using namespace std;

class Hall {
public:
    int hallNumber;
    int totalSeats;
    bool* seats;

    Hall(int hallNumber, int totalSeats);

    void displaySeats();
    bool bookSeat(int seatNumber);
};

