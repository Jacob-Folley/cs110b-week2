// Assignment2_pyramidPrinting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std; 

int main()
{
	int userInput;
	string userAnswer; 

	cout << "Lets create a palindrome!" << endl;

	do {
		//Asks user for input
		cout << "Choose a number: " << endl;
		cin >> userInput;

		//Loops until there the palindrome matches the user input
		for (int k = 1; k <= userInput; k++) {
			// Creates right amount of spaces
			for (int s = 2 * (userInput-k); s >= 0; s--) {
				cout << " "; 
			}
			// Creates numbers from least to greatest
			for (int i = 1; i <= k; i++) {
				cout << i;
				cout << " ";
			}
			// Creates numbers from greatest to least
			for (int j = k - 1; j > 0; j--) {
				cout << j;
				cout << " ";
			}
			cout << endl; 
		}
		cout << endl; 
		// Asks the user if they want to make another palindrome
		cout << "Go again? y/n: " << endl;
		cin >> userAnswer;

	} while (userAnswer == "y"); 

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
