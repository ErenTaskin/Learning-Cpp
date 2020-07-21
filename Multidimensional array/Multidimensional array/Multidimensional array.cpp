// Multidimensional array.cpp //

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Declaring multidimensional array
	string mtd_array[2][3]{
		{ "Mustang", "Chevrolet", "Dodge"},
		{ "Peugeot", "Renault" , "Kia"}
	};

	// Printing to screen with for loop
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << mtd_array[i][j] << " ";
		}

		cout << "\n";
		}
}