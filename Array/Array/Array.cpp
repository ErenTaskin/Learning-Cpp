// Array.cpp //

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //First example of integer array
        int integer_array[] = { 10, 30, 15 };
    
        cout << "First integer array list\n";
        cout << "************************\n";
        cout << integer_array[1] << "\n";   
        cout << "\n";

    //Second example of integer array
        int integer_array2[4];

            integer_array2[0] = 12;
            integer_array2[1] = 18;
            integer_array2[2] = 15;
            integer_array2[3] = 22;
    
        cout << "Second integer array list\n";
        cout << "*************************\n";
        cout << integer_array2[2] << "\n";
        cout << "\n";

    //String array example
        cout << "    String array list\n";
        cout << "*************************\n";

        string string_array[] = { "Chevrolet", "Mustang", "Dodge"};
            cout << string_array[2] << "\n";
            cout << "\n";

    //Double array example
        double double_array[] = { 2.1, 5.4, 8.2 };

        cout << "    Double array list\n";
        cout << "*************************\n";
        cout << double_array[1] << "\n";
        cout << "\n";

    //For looped integer array
        cout << "Indexing the array with for loop\n";
        cout << "********************************\n";

        for (int i = 0; i < 3; i++){           
            cout << "Index of the array " << i << " > " << integer_array[i] << "\n";          
        }

        cout << "\n";
}