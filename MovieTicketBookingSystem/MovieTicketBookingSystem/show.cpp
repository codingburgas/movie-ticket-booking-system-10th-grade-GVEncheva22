#include "Show.h"
#include <iostream>
using namespace std;

Show::Show(string title, string time, Hall* hall) {
    this->movieTitle = title;
    this->showTime = time;
    this->hall = hall;
}

void Show::displayShowInfo() const {
    cout << "Movie: " << movieTitle << endl;
    cout << "Time: " << showTime << endl;
    cout << "Hall Number: " << hall->hallNumber << endl;
}

bool Show::bookSeat(int seatNumber) {
    return hall->bookSeat(seatNumber);
}
