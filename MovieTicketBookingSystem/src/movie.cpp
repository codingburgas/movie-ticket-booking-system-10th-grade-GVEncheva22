#include "../include/movie.h"
#include <iostream>
using namespace std;

Movie::Movie() {
    title = "";
    language = "";
    genre = "";
    releaseDate = "";
}

Movie::Movie(const string& title, const string& language, const string& genre, const string& releaseDate) {
    this->title = title;
    this->language = language;
    this->genre = genre;
    this->releaseDate = releaseDate;
}

string Movie::getTitle() const {
    return title;
}

string Movie::getLanguage() const {
    return language;
}

string Movie::getGenre() const {
    return genre;
}

string Movie::getReleaseDate() const {
    return releaseDate;
}

void Movie::setTitle(const string& title) {
    this->title = title;
}

void Movie::setLanguage(const string& language) {
    this->language = language;
}

void Movie::setGenre(const string& genre) {
    this->genre = genre;
}

void Movie::setReleaseDate(const string& releaseDate) {
    this->releaseDate = releaseDate;
}

void Movie::display() const {
    cout << "Title: " << title << endl;
    cout << "Language: " << language << endl;
    cout << "Genre: " << genre << endl;
    cout << "Release Date: " << releaseDate << endl;
}
