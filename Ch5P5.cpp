/*
File name: Ch5P5.cpp
Github URL: https://github.com/clk2039/Ch5P5.git
Programmer: Kit Miller
Date: November 2025
Requirements: Write a program that generates a randomg number and asks the user to guess what the number is.
If the user's guess is higher than the random number, the program should display, "Too high, try again."
If the user's guess if lower than the random number, the program should display, "Too low, try again."
The program should use a loop that repeats until the user correctly guesses the random number.
Make the program keep count of the number of guesses the user makes.
When the user correctly guesses the random number, the program should display the number of guesses.
*/

#include <iostream>
#include <random>
using namespace std;

int main()
{
	//Define variable
	int randomNumber;
	int userGuess;
	int guessCount = 0;

	//Generate random number between 1 and 100
	random_device myEngine;
	uniform_int_distribution<int> randomInt(1, 100);
	randomNumber = randomInt(myEngine);

	//Ask user to guess the number
	cout << "I have a number between 1 and 100 on my mind, can you guess what it is?" << endl;

	//Loop until user guesses the number
	do
		{

		//Ask user for their guess
		cin >> userGuess;

		//Validate input
		while (userGuess < 1 || userGuess > 100)
		{
			cout << "Error, please enter a number between 1 and 100." << endl;

			cin >> userGuess;
		}

		//Add counter for number of guesses
		guessCount++;
	
		//Check if guess is too high, too low, or correct
		if (userGuess > randomNumber)
		{
			cout << "Too high, try again." << endl;
		}
		else if (userGuess < randomNumber)
		{
			cout << "Too low, try again." << endl;
		}
		else
		{
			cout << "It only took you " << guessCount << " guesses!" << endl;
		}
	} 
	while (userGuess != randomNumber);

	return 0;

   
}
