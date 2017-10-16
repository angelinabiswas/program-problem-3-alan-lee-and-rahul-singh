/*
Rahul Singh and Alan Lee - 1st period
Program Problem 3
Using a 3 digit number to put create separate varibles
*/

// Libraries
#include <iostream> 
#include <conio.h>
#include <math.h> //important for the functions to solve the math

//Namespaces
using namespace std;

//Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n'; //helps with the pause
}

// Variables
int x; //the three digit number taken in
int a; //the first number; the hundreds place
int b; //the second number; the tens place
int c; //the third number; the ones place
int y; //integer that helps with while function

// MAIN
int main() {
	int y = 1;
	while (y < 31) //makes it loop 30 times
	{
		cout << "Enter in a three digit number. \n";
		cin >> x;
		//finding all the digits
		int a = x / 100;
		int b = (x - a * 100) / 10;
		int c = (x - a * 100 - b * 10); 
		//main functions
		if (a < b && b < c)
			cout << "Ascending \n";
		else if (a > b && b > c)
			cout << "Descending \n";
		else {
			cout << "Neither \n";
			y++; //is adding more on to the loop
			_getch();
		}
	}
	return 0; //goes to the beginning of the loop
}
