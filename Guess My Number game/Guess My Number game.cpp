// Guess My Number game.cpp : Defines the entry point for the console application.
#include <iostream>
#include "stdafx.h"

using namespace std;

int main()
{
	cout << "Welcome to Guess My Number game" << endl;

	int answer = 6;
	int x=0;
	bool keepgoing = true;
	cout << "Guess my number: ";
		while (keepgoing) {

		cin >> x;
		if (x == answer) {
			cout << "You got it!";
			keepgoing = false;
		}
		if (x > answer) {
			cout << "You guessed too high" << endl;
			cout << "Guess one more time: ";
		}
		if (x < answer) {
			cout << "You guessed too low" << endl;
			cout << "Guess one more time: ";
		}
	}
	return 0;
}