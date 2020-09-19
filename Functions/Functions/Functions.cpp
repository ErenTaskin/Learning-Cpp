// Functions.cpp //

#include <iostream>
using namespace std;

void options() {
    cout << "1. Steam\n";
    cout << "2. Epic Games Store\n";
    cout << "3. GOG\n\n";
}

void selection() {
    int value;

    cout << "Select your option: ";
    cin >> value;
    cout << "\n";

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

int main()
{
    options();

    selection();
}