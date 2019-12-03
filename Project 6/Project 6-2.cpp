// CMPT101 HW6, Project6-2.cpp 
// Purpose: Display the characters for the ASCII codes 32 through 127
// Programmer: Liam Sawyer 
// Date: 11/21/2019 

#include <iostream> // using the iostream preprocessor directive
using namespace std; // using the std namespace for program

int main() // using the main function*/ 
{ // beginning block for main function
    int num, character; // defining varaibles num and character as integers
    character = 0; // begin with character equal to 0
    cout << "\nI will display the characters for ASCII codes 32 through 127.\n"; // output text stating what the program will do 
    cout << "\n"; // output text for design purpose only
    for (num=32; num<=127; num++) // for loop for ASCII codes starting with 32 and adding a number to it until it gets to 127
    { // beginning block for loop body
    cout<<(char)num <<" "; // displays a space after each charcter is displayed
    character++; // adds a character to the last
        if (character == 12) // if statement for 12 characters per line
        { // beginning block for if function
        character = 0; // characters is equal to zero
        cout<<endl; // adds space to end of each line to start on next
        } // end block for if function
    } // end block for loop body
return(0); // returns zero to OS
} // end block for main function
  
