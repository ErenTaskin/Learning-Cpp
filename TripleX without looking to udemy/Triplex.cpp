#include <iostream>
#include <string>
using namespace std;

void GameIntroduction()
{
    // This code block is about story
    cout << "You are a cyber security specialist and someone is trying hack your informations. You need to find the right codes to secure your information...\n";
    cout << "This was the " << Difficulty << ". attack. There is " << AttacksRemaining << "attacks remaining.";
}

bool PlayGame()
{
    GameIntroduction();

    // Declaring code variables
    const int CodeA = rand() % Difficulty + 1;
    const int CodeB = rand() % Difficulty + 1;
    const int CodeC = rand() % Difficulty + 1;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Making player know the information for finding the right code
    cout << "If you sum all codes: " << CodeSum;
    cout << "If you product all codes: " << CodeProduct;

    int GuessCodeA, GuessCodeB, GuessCodeC;
    int GuessSum = GuessCodeA + GuessCodeB + GuessCodeC;
    int GuessProduct = GuessCodeA * GuessCodeB * GuessCodeC;

    cout << "What is your guess? ";
    cin >> GuessCodeA, GuessCodeB, GuessCodeC;
}

int main()
{
    PlayGame();

    return 0;
}