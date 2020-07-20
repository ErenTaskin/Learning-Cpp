#include <iostream>
using namespace std;

int main()
{
    string password = "password";
    cout << "Enter your password > ";

    string input;
    cin >> input;

    if (password == input)
    {
        cout << "Acces granted.";
    }

    if (password != input)
    {
        cout << "Acces denied.";
    }
}