#include <iostream>
using namespace std;

void PrintIntroduction ()
{
    // Printing story
    cout << "\nYou are a prisoner in the jail.\n";
    cout << "You need escape from here.\n";
    cout << "But to escape from here you need to enter the right numbers to jail door keypads.\n";
    cout << "Good luck.\n";
    cout << "*********************************************************************************\n";
}

bool PlayGame ()
{
    // Declaring variables
    int CodeA = 2;
    int CodeB = 3;
    int CodeC = 4;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // Printing variables
    cout << "\nThere are 3 numbers of code.\n";
    cout << "The codes add-up to: " << CodeSum;
    cout << "\n";
    cout << "The codes multiply to give: " << CodeProduct << "\n";

    // Storing player guesses
    int GuessA, GuessB, GuessC;
    cout << "What is your guess? ";
    cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Checking is player guess is correct
    if (CodeSum == GuessSum && CodeProduct == GuessProduct)
    {
        cout << "\nYou escaped. Well done.\n";
        return true;
    }
    else
    {
        cout << "\nYou couldn't escaped.\n";
        return false;
    }
}

int main() 
{ 
    PrintIntroduction();
    while(true)
    {
        bool bLevelComplete = PlayGame();
        cin.clear(); // Clears any error
        cin.ignore(); // Discards the buffer
    }

    return 0;                                   
}