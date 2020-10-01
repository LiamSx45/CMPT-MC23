// CMPT101 Extra Credit, ExCred-2.cpp 
// Purpose: Determine if year is a leap year or not
// Programmer: Liam Sawyer 
// Date: 11/22/2019 

#include <iostream> //using the iostream preprocessor
using namespace std; // using the std namespace for program
int main() // using main function
{ // beginning block for main function
    int year; // definning int variable
    cout << "Please enter a year." << endl; // output text asking user to enter year
    cin >> year; // user input year
    if (year%100 == 0 && year%400 == 0){ // if statement for year that is leap year
        cout << year << " is a leap year." << endl; // output text statement for leap year
    } // end block for if
    else if (year%100 != 0 && year%4 == 0){ // else if statement for year that is leap year
        cout << year << " is a leap year." <<endl; // output text statement for leap year
        
    } //end block for else if
    else { // else statement for year that is not leap year
        cout << year << " is not a leap year." <<endl; // output text statement for no leap year
    } //end block for else
} // end block for main
