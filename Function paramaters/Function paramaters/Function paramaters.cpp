// Function paramaters.cpp //

#include <iostream>
using namespace std;

void menu() {
    cout << "1. Steam\n";
    cout << "2. Epic Games Store\n";
    cout << "3. GOG\n\n";
}

int get_input() {
    cout << "Select your option: ";

    int input;
    cin >> input;
    cout << "\n";

    //return
    return input;
}

void process_selection(int select) {
    switch (select) {
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

int main() {

    menu();
    int selection = get_input();
    process_selection(selection);

    return 0;
}