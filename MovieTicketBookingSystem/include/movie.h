#pragma once
#include <string>
using namespace std;

class Movie {
private:
    string title;
    string language;
    string genre;
    string releaseDate;

public:
    Movie(); 
    Movie(const string& title, const string& language, const string& genre, const string& releaseDate);

    
    string getTitle() const;
    string getLanguage() const;
    string getGenre() const;
    string getReleaseDate() const;

   
    void setTitle(const string& title);
    void setLanguage(const string& language);
    void setGenre(const string& genre);
    void setReleaseDate(const string& releaseDate);

    
    void display() const;
};
