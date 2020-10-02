#include <iostream>
#include <ctime>
using namespace std;

void PrintIntroduction (int Difficulty)
{
    // Printing story
    cout << "\nYou are a prisoner in the jail. You need escape from here.\n";
    cout << "But to escape from here you need to enter the right numbers to jail door keypads. This is the " << Difficulty << ". door.\n";
    cout << "Good luck.\n";
    cout << "*********************************************************************************";
}

bool PlayGame (int Difficulty)
{
    // Declaring variables
    const int CodeA = rand() % Difficulty + 1;
    const int CodeB = rand() % Difficulty + 1;
    const int CodeC = rand() % Difficulty + 1;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

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
        cout << "\n***You pass this door. Well done.***\n";
        return true;
    }
    else
    {
        cout << "\n***You couldn't pass this door.***\n";
        return false;
    }
}

int main() 
{ 
    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    while (LevelDifficulty <= MaxDifficulty) 
    {
        PrintIntroduction(LevelDifficulty);
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear(); // Clears any error
        cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    cout << "***Congratulations, you escaped from prison.***";
    return 0;                                   
}