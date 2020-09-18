#include <iostream>
using namespace std;

int main()
{
    cout << "Input value: ";
    int value;
    cin >> value;

    switch (value) {
    case 1:
        cout << "Value is 1";
        break;
    case 2:
        cout << "Value is 2";
        break;
    case 3:
        cout << "Value is 3";
        break;
    default:
        cout << "Unrecognized value";
    }
}