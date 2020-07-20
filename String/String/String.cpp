// String.cpp //

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "This is a string. ";
    string text2 = "This is a second string. ";
    string ultimatetext = text + text2 + "And this is ultimatestring.";

    cout << text << "\n";
    cout << text2 << "\n";
    cout << ultimatetext << "\n";
}
