#include "../include/cinema.h"
#include <iostream>
using namespace std;

Cinema::Cinema(string name, string city) {
    this->name = name;
    this->city = city;
    hallCount = 0;
}

bool Cinema::addHall(int hallNumber, int totalSeats) {
    if (hallCount < maxHalls) {
        halls[hallCount] = Hall(hallNumber, totalSeats);  
        hallCount++;
        return true;
    }
    else {
        cout << "Cannot add more halls, limit reached." << endl;
        return false;
    }
}

void Cinema::displayCinemaInfo() const {
    cout << "Cinema: " << name << ", City: " << city << endl;
    cout << "Number of halls: " << hallCount << endl;
    for (int i = 0; i < hallCount; i++) {
        halls[i].displayHallInfo();
    }
}

int Cinema::getHallCount() const {
    return hallCount;
}
