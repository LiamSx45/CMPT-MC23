// CMPT101 HW8, Project8-2.cpp 
// Purpose: Tells if number is Prime or not 
// Programmer: Liam Sawyer 
// Date: 12/09/2019 

#include <iostream> // using the iostream preprocessor directive
using namespace std; // using the std namespace for program

bool isPrime(int);

int main() // main function
{
  int Num; //num variable as an int

    cout << "This program will let you know if a certain number is a  "
       << "prime number.\nEnter a number: "; // asks user to do something
    cin  >> Num;//input number from user

  cout << "The number " << Num; //output of the number

  if (isPrime(Num)) // if statement for true or false bool 
  {
    cout << " is a Prime number. To test another number, run the program again!" << endl; // true output text for prime
  }
  else
    cout << " is not a Prime number. To test another number, run the program again!" << endl; // fasle output text for prime

  return 0; // ends program
}

bool isPrime(int Num) //isPrime function for true or false
{
  if (Num > 1) // number has to be greate than one
  {
    for (int i = 2; i <= Num; ++i) // for loop for number used in main function
    {
      
      if (Num % i == 0) // if remainder is 0
      {
        if(Num == i) // if its true
          return true; // tells bool its true and prime number
        else
          return false; // tells bool its false and is not a prime number
      }
  
    }
  }
  return false; // if number is less than 1 then ist flase and not prime
}

