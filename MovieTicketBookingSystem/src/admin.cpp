#include "../include/movie.h"
#include <string>
#include <iostream>
using namespace std;

const int maxMovies = 5;
Movie movies[maxMovies];
int movieCount = 0;

void addMovie() {
    if (movieCount >= maxMovies) {
        cout << "Movie limit reached. Cannot add more movies." << endl;
        return;
    }

    string title, language, genre, releaseDate;

    cout << "Enter movie title: ";
    cin.ignore();
    getline(cin, title);

    cout << "Enter movie language: ";
    getline(cin, language);

    cout << "Enter movie genre: ";
    getline(cin, genre);

    cout << "Enter movie release date (e.g. 2023-06-01): ";
    getline(cin, releaseDate);

    movies[movieCount] = Movie(title, language, genre, releaseDate);
    movieCount++;

    cout << "Movie added successfully!" << endl;
}

void displayMovies() {
    if (movieCount == 0) {
        cout << "No movies available." << endl;
        return;
    }

    for (int i = 0; i < movieCount; i++) {
        cout << "Movie #" << i + 1 << ":" << endl;
        movies[i].display();
        cout << "------------------------" << endl;
    }
}

void deleteMovie() {
    if (movieCount == 0) {
        cout << "No movies to delete." << endl;
        return;
    }

    displayMovies();

    cout << "Enter the movie number to delete: ";
    int index;
    cin >> index;
    index--;

    if (index < 0 || index >= movieCount) {
        cout << "Invalid movie number." << endl;
        return;
    }

    for (int i = index; i < movieCount - 1; i++) {
        movies[i] = movies[i + 1];
    }
    movieCount--;

    cout << "Movie deleted successfully!" << endl;
}

int main() {
    int choice;

    do {
        cout << "\nAdmin Menu:\n";
        cout << "1. Add movie\n";
        cout << "2. Display movies\n";
        cout << "3. Delete movie\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addMovie();
                break;
            case 2:
                displayMovies();
                break;
            case 3:
                deleteMovie();
                break;
            case 4:
                cout << "Exiting admin panel." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

