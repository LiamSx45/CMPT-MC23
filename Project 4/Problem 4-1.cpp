/* CMPT101 HW4, Project4-1.cpp
Purpose: Program Calculates amount of cookies to be eaten from user data
Programmer: Liam Sawyer
Date: 10/08/2019 */

#include <iostream> /* using the iostream preprocessor directive*/
#include <iomanip> /* using the iomanip preprocessor directive*/
using namespace std; /* using the std namespace for program*/
int main() /* using the main function*/
{ /* beginning block for main function */
	char gender; /* defining gender as a char variable */
	int age, number_cookies, calories_cookie = 230; /* defining age, number of cookies, and calories per cookie as a integer variable*/
	double weight, height, BMR, total_cookies; /* Using double variables for weight, height, BMR, and total cookies eaten*/
	cout << "Please provide some basic information\n" << endl; /* Intro output statement for user*/
	cout << "Are you: Male or Female (m or f)?\n" << endl; /* output text asking the user to input what gender they are*/
	cin >> gender; /* Input for gender*/
	cout << "What is your age in years?\n" << endl; /* output text asking the user to input what age they are*/
	cin >> age; /* Input for age*/
	cout << "What is your weight in pounds?\n" << endl; /* output text asking the user to input what their weight is*/
	cin >> weight; /* Input for weight*/
	cout << "What is your height in inches?\n" << endl; /* output text asking the user to input what height they are*/
	cin >> height; /* Input for height*/
	if ('m' == gender || 'M' == gender) /* If statement for the male gender, user can enter lowercase or upper case M charcter*/
	{ /* beginning block for if statement*/
		BMR = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age); /* defining the equation for MALE BMR with variables that user inputted data for*/
	} /* ending block for if statement*/
	else if ('f' == gender || 'F' == gender) /* Else If statement for the female gender, user can enter lowercase or upper case F charcter*/
	{ /* beginning block for else if statement*/
		BMR= 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age); /* defining the equation for FEMALE BMR with variables that user inputted data for*/
	} /* ending block for else if statement*/
	total_cookies = BMR / calories_cookie; /* defining what the total cookies is equal to, BMR divided by calories per cookie*/
	cout << "The number of cookies that can be consumed = " << setprecision(2) << fixed << total_cookies; /* output text telling user how many cookies they can eat*/
	return 0; /* Retunrs 0 to the OS*/
} /* ending block for main function */
