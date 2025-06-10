#include "pch.h"

void centerText(const string& text)
{
    int width = 120; 
    int leftPadding = (width - text.length()) / 2;
    if (leftPadding < 0) {
        leftPadding = 0;
    }

    cout << string(leftPadding, ' ') << text;
}

void printEndl(int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << endl;
    }
}

void printStrRepeat(const string& str, int times)
{
    for (int i = 0; i < times; i++)
    {
        cout << str;
    }
}
