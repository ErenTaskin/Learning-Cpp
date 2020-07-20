#include <iostream>
#include <string>
using namespace std;

int main()
{
    string yninput;
    cout << "Do you have a password. [y],[n] > ";
    cin >> yninput;

    string yes = "y";
    string no = "n";
    string password = "database";
    string input;

    if (yninput == yes)
    {
        cout << "Write your password. > ";
        cin >> input;

        if (input == password)
        {
            cout << "Acces granted.\n";
            cout << "\n";
            cout << "1. Add new price.\n";
            cout << "2. Delete price.\n";
            cout << "3. View prices.\n";
            cout << "4. Search prices.\n";
            cout << "5. Quit\n";
            cout << "\n";
            cout << "Select your choice. > ";

            int value;
            cin >> value;

            if (value == 5)
            {
                cout << "Quitting application.\n";
                exit(1);
            }            
        } 
        else
        {
            cout << "You can use as a guest.\n";
            cout << "\n";
            cout << "1. View prices.\n";
            cout << "2. Search prices.\n";
            cout << "3. Quit\n";
            cout << "\n";
            cout << "Select your choice. > ";
        }

        int value;
        cin >> value;

        if (value == 3)
        {
            cout << "Quitting application.\n";
            exit(1);
        }
    }
    if (yninput == no)
    {
        cout << "You can use as a guest.\n";
        cout << "\n";
        cout << "1. View prices.\n";
        cout << "2. Search prices.\n";
        cout << "3. Quit\n";
        cout << "\n";
        cout << "Select your choice. > ";
    }

    int value;
    cin >> value;

    if (value == 3)
    {
        cout << "Quitting application.\n";
        exit(1);
    }
}