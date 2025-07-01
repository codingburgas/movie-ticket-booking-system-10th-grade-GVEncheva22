#include "../include/hall.h"
#include <iostream>
using namespace std;

Hall::Hall() {
    hallNumber = 0;
    totalSeats = 0;
    seats = nullptr;
}

Hall::Hall(int hallNumber, int totalSeats) {
    this->hallNumber = hallNumber;
    this->totalSeats = totalSeats;
    seats = new bool[totalSeats];
    for (int i = 0; i < totalSeats; i++)
        seats[i] = false;
}

void Hall::displaySeats() {
    cout << "Hall " << hallNumber << " seats:\n";
    for (int i = 0; i < totalSeats; i++) {
        if (seats[i])
            cout << "[X] ";
        else
            cout << "[O] ";
    }
    cout << endl;
}

bool Hall::bookSeat(int seatNumber) {
    if (seatNumber < 0 || seatNumber >= totalSeats)
        return false;

    if (!seats[seatNumber]) {
        seats[seatNumber] = true;
        return true;
    }
    return false;
}

void Hall::displayHallInfo() const {
    cout << "Hall Number: " << hallNumber << endl;
    cout << "Total Seats: " << totalSeats << endl;
}
