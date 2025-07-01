#include "../include/user.h"
#include <iostream>

using namespace std;

const int maxShows = 5;
Show shows[maxShows];
int showCount = 0;

void viewProjections() {
    if (showCount == 0) {
        cout << "No projections available right now." << endl;
        return;
    }

    cout << "Available movie projections:\n";
    for (int i = 0; i < showCount; i++) {
        cout << i + 1 << ". " << shows[i].movieTitle << " | Time: " << shows[i].showTime  << " | Hall: " << shows[i].hallNumber << endl;
    }
}
