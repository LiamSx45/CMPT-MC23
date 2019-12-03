// CMPT101 HW6, Project6-3.cpp 
// Purpose: Finds all prime numbers between 3 and 100. 
// Programmer: Liam Sawyer 
// Date: 11/21/2019 
#include <iostream> // using the iostream preprocessor directive
using namespace std; // using the std namespace for program
int main () // using the main function
{ // beginning block for main function
  cout << "\nThis program will display the prime numbers from 3 to 100"; // output text stating what the program is for
  cout << "\n \n"; // output text for display purpose
    for (int i=3; i<100; i++) // for loop if number is from 3 and then add a number to max of 100
    { // beginning of loop body
        bool prime=true; // condition for prime numbers
        for (int j=2; j*j<=i; j++) // for loop if prime number starting from 2 
        { // beginning of second for loop
            if (i % j == 0) // if statement for non prime numbers
            { // beginning of if function
                prime=false; // number is not prime
                break;    // end if statement
            } // end of if function
        }   // end of second loop
        if(prime) cout << i << " "; // if statement for priem numbers to state all of them
    } // end of loop 
    return 0; // returns 0 to OS
} // end of main function 
