/*
CMPT101 HW3, Project3-2.cpp
Purpose: Write a program that calculates a car’s gas mileage
Programmer: Liam Sawyer
Date: 10/01/2019
*/
#include <iostream> /* using the iostream preprocessor directive*/ 
#include <iomanip> /* using the iomanip preprocessor directive*/

using namespace std; /* using the std namespace for program*/

int main() /* using the main function*/
{ /* beginning block for main function */
	double capacity, miles, average; /* defining double value variables for capacity, miles and average*/

	cout << "What is your car's tank size in gallons?: " << endl; /*output text asking for gallons in car*/
	cin >> capacity; /*input text from user for capacity of car*/
	cout << "How miles can you drive on a full tank?: " << endl; /* output text asking for miles on full tank */
	cin >> miles; /*input text for mile amount*/
	
	average = miles / capacity; /* average is miles per gallon */

	cout << "The car's Miles Per Gallon is: " << setprecision(2) << fixed << average; /* output MPG to fixed 2 points after decimal point */
	
	return 0; /* returns a 0 to the OS*/
} /* end block for main function*/
