// Function paramaters practice.cpp //

#include <iostream>
using namespace std;

void show_menu() {
    cout << "1. Set price\n";
    cout << "2. Delete price\n";
    cout << "3. Quit\n";
    cout << "********************";
    cout << "\n";
}

int get_input() {
    cout << "Enter your choice: ";
    int input;
    cin >> input;
    cout << "\n";

    return input;
}

void process_selection(int select) {
    switch (select) {
    case 1:
        cout << "Setting price...\n";
        break;
    case 2:
        cout << "Deleting price...\n";
        break;
    case 3:
        cout << "Quitting...\n";
        break;
    default:
        cout << "Select from the list.\n";
    }
}

int main()
{
    show_menu();
    
    int selection = get_input();
    process_selection(selection);
}