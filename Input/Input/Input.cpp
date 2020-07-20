#include <iostream>
using namespace std;

int main()
{
    //Declaring variables 
    string name;
    int age;

    //Asking and getting name
    cout << "What is your name: ";
    cin >> name;

    //Saying name to user
    cout << "Your name is " << name << ".\n";

    //Asking and getting age 
    cout << "How old are you: ";
    cin >> age;

    //Saying age to user
    cout << "You are " << age << " years old.";
}