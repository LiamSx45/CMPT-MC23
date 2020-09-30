/*
CMPT101 HW3, Project3-3.cpp
Purpose: Write a program that prompts the user for the course information
Programmer: Liam Sawyer
Date: 10/01/2019
*/
#include <iostream> /* using the iostream preprocessor directive*/ 
#include <iomanip> /* using the string preprocessor directive*/
#include <string> /* using the sting preprocessor directive*/
using namespace std; /* using the std namespace for program*/
int main() /* using the main function*/
{ /* beginning block for main function */
	string course_num, course_name, semester_szn, semester_yr, hw_num, month, day, year, date; /* defining string variables for all needed information*/
	cout << "What is your course number?"; /* output asking for course number*/
	getline(cin, course_num); /* input text for course number*/
	cout << "What is your course name?"; /* output asking for course name*/
	getline(cin, course_name);/* input text course name*/
	cout << "What is the current semester season?"; /* output asking for semester season*/
	getline(cin, semester_szn);/* input text for semester season */
	cout << "What is the current semester year?"; /* output asking for semester year*/
	getline(cin, semester_yr);/* input text for semester year*/
	cout << "What is the homework number?"; /* output asking for homework number*/
	getline(cin, hw_num);/* input text for homework number */
	cout << "What is the due date? First enter month then hit enter, then date and hit enter, year and enter, and lastly day and hit enter!"; /* output asking for date in a specific order*/
	getline(cin, month);/* input text for month */
	getline(cin, date);/* input text for date */
	getline(cin, year);/* input text for year */
	getline(cin, day);/* input text for day */
	cout << "___________" << endl; /* output text for decorative reasons*/
	cout << "            " << endl; /* output text for decorative reasons*/
	cout << course_name << course_num << "          " << semester_szn << semester_yr << " " << endl; /* output text for 1st line of heading*/
	cout << "Homework " << hw_num << " " << endl; /* output text for 2nd line of heading*/
	cout << "Due: " << month << ", " << date << ", " << year << " " << day << " " << endl; /* output text for 3rd line of heading*/
	return 0; /* returns a 0 to the OS*/
} /* end block for main function*/
