#include <iostream>
using namespace std;

int main()
{
    int number_apples = 5;
    int number_bananas = 7;
    int number_fruits = number_apples + number_bananas;

    cout << "Number of apples: " << number_apples << "\n";
    cout << "Number of bananas: " << number_bananas << "\n";

    cout << "Number of all fruits: " << number_fruits << "\n";

    cout << "One fruit added to all fruits.\n";
    number_apples = number_apples + 1;
    number_bananas = number_bananas + 1;

    number_fruits = number_apples + number_bananas;
    cout << "Number of apples: " << number_apples << "\n";
    cout << "Number of bananas: " << number_bananas << "\n";

    cout << "Number of all fruits: " << number_fruits << "\n";

}