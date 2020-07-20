//Do while loop//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Declaring Variables
    const string password = "DoWhile";
    string input;

    //Making do while loop
   do {

       cout << "Enter your password > ";
           cin >> input;
        
            if (input != password)
            {
                cout << "Acces denied." << "\n";
            }
   } while (password != input);

   //If entered password in do while loop is true this will happen
       if (input == password)
       {
           cout << "Acces granted.";
       }
}