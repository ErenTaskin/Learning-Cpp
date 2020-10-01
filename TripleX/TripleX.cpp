#include <iostream>
using namespace std;

int main() 
{ 
    // Printing story
    cout << "You are a prisoner in the jail.\n";
    cout << "You need escape from here.\n";
    cout << "But to escape from here you need to enter the right numbers to jail door keypads.\n";
    cout << "Good luck.\n";
    cout << "*********************************************************************************\n";

    // Declaring variables
    int CodeA = 2;
    int CodeB = 3;
    int CodeC = 4;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // Printing variables
    cout << "There are 3 numbers of code.\n";
    cout << "The codes add-up to: " << CodeSum;
    cout << "\n";
    cout << "The codes multiply to give: " << CodeProduct << "\n";

    int GuessA, GuessB, GuessC;
    cout << "What is your guess? ";
    cin >> GuessA;
    cin >> GuessB;
    cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (CodeSum == GuessSum && CodeProduct == GuessProduct)
    {
        cout << "You escaped. Well done.";
    }
    else
    {
        cout << "You couldn't escaped.";
    }

    return 0; 
}