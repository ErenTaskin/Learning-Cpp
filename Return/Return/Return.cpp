// Return.cpp //

#include <iostream>
using namespace std;

void options() {
    cout << "1. Steam\n";
    cout << "2. Epic Games Store\n";
    cout << "3. GOG\n\n";
}

int selection() {
    cout << "Select your option: ";

    int value;
    cin >> value;
    cout << "\n";

    //return
    return value;
}

int main()
{
    options();

    int value = selection();

    switch (value) {
    case 1:
        cout << "Valve\n";
        break;
    case 2:
        cout << "Epic Games\n";
        break;
    case 3:
        cout << "CD Projekt Red\n";
        break;
    default:
        cout << "Select from the list.\n";
    }
}