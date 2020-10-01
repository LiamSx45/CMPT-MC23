// CMPT101 Project 7, Project 7-1.cpp 
// Purpose: Creates txt file with multiplication table
// Programmer: Liam Sawyer 
// Date: 11/26/2019 

#include <iostream> //using the iostream preprocessor
#include <iomanip> //using the iomanip preprocessor
#include <fstream> //using the fstream preprocessor

using namespace std; // using the std namespace for program

int main() // main function
{
  ofstream multiply; // creates a document
  multiply.open("multiply.txt"); // names a document multiply.txt
  multiply << setfill('-') << setw(80) << "-" << endl; // sets width and fills with a dash
  multiply << setfill(' '); // change filliing character back to space

  multiply << "  "; // adds a space between charcters
  for (int i = 1; i <= 9; i++) // for statement creates numbers 1 --> 9 for rows
    multiply << setw(8) << i; // sets width between
  multiply << endl; // outputs the text

  multiply << setfill('-') << setw(80) << "-" << endl; // sets width and fills with a dash
  multiply << setfill(' '); // change filliing character back to space

  for (int row = 1; row <= 9; row++) // for statement creates numbers 1 --> 9 for rows
  {
    multiply << row << ":";
    for (int col = 1; col <= 9; col++) // for statement creates numbers 1 --> 9 for columns
      multiply << setw(8) << row*col; // sets width between row and column and multipys the numbers
    multiply << endl; // outputs the text
  }
  return 0; // returns 0 to OS
}
