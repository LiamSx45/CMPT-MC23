/*
CMPT101 HW3, Project3-1.cpp
Purpose: Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded
Programmer: Liam Sawyer
Date: 10/01/2019
*/
#include <iostream> /* using the iostream preprocessor directive*/ 
#include <iomanip> /* using the iomanip preprocessor directive*/ 
#include <cmath> /* using the cmath preprocessor directive*/ 

using namespace std; /* using the std namespace for program*/ 

int main() /* using the main function*/ 
{ /* beginning block for main function */ 
	double principal, interest_rate, compound_amnt; /* defining double value variables for principal, interest and compound*/
	cout << "What is your savings account balance?: " << endl; /*output text asking for principal amount*/
	cin >> principal; /*input text from user for principal amount*/
	cout << "What is your annual interest rate?: " << endl; /* output text asking for interest rate */
	cin >> interest_rate; /*input text for interest amount*/
	cout << "How many times has your interest been compounded?: " << endl; /*output text asking for compunded amount*/
	cin >> compound_amnt; /*input text for compound amount*/
	double amt1 = 1 + ((interest_rate / 100) / compound_amnt); /*double variable for amt1 which is first part of equation */
	double amount = principal * pow(amt1, compound_amnt); /*double variable for amount which is whole equation */
	cout << "Interest Rate: " << setprecision(2) << fixed << interest_rate << " % " << endl; /* output interest rate to fixed 2 points after decimal point */
	cout << "Times Compounded: " << compound_amnt << endl;/* output compound amount 2 points after decimal point */
	cout << "Principal: " << " $ " << principal << endl; /* output principal to fixed 2 points after decimal point */
	cout << "Interest: " << " $ " << amount - principal << endl; /* output interest to fixed 2 points after decimal point */
	cout << "Amount: " << " $ " << amount << endl; /* output amount to fixed 2 points after decimal point */

	return 0; /* returns a 0 to the OS*/
} /* end block for main function*/
