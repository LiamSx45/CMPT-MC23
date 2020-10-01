// CMPT101 Extra Credit, ExCred-4.cpp 
// Purpose: Guess the correct number
// Programmer: Liam Sawyer 
// Date: 11/22/2019 

#include <iostream> //using the iostream preprocessor
using namespace std; // using the std namespace for program
int main() // using main function
{ // beginning block for main function
  int guesses = 0; // int variable guesses
  int numby; // int variable
  cout << "Enter your guess." << endl; //output text asking user for an input
  for(int num = 1; num <=7; num++) // for loop for year guess
  { // beginning block for for loop
    guesses++; // add 1 to num of guesses
    cin >> numby; // enter year
    if(numby > 2018) // if guess is bigger than year
    { // beginning block for if
        cout << "The number you entered is too big, please try again."<<endl; // output saying too big try again
      }
    else if(numby < 2018) // else if num less than 2018
    { // beginning block for else if
        cout << "The number is too small, please try again!" << endl; //output for year less than 2018
      }
    else // else, 2018 is picked
    { // beginning block for else 
        cout << "Congratulations! You found the number!" << endl; //output text
        cout << "It took "<<guesses<< " guesses to find the number." << endl; //tells user how many guesses it took
        num = 0; // num go to 0
      }
    }

  return 0; //return 0 to OS
}
