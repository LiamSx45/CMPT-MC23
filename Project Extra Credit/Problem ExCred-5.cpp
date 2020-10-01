// CMPT101 Extra Credit, ExCred-5.cpp 
// Purpose: Roll 6 sided dice random, input result to text doc 
// Programmer: Liam Sawyer 
// Date: 11/22/2019 

#include <stdlib.h> //using the stdlib.h preprocessor
#include <time.h> //using the time.h preprocessor
#include <fstream> //using the fstream preprocessor

using namespace std; // using the std namespace for program

int main() // using main function
{ // beginning block for main function
  ofstream rolldice; // output rolldice
  rolldice.open("rolldice.txt"); //open text document 
  srand(time(NULL)); //random numbers

  for (int i = 1; i <= 20; i++) // for loop to roll dice 20 times
  { // beginning block for for loop
    int result = (rand() % 6) + 1; // pick random number from1 to 6
    rolldice << result << endl; // output result to text
  } // end block for for loop
  return 0; // return 0 to OS

} // end block for main function

