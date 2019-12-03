// CMPT101 HW6, Project6-1.cpp 
// Purpose: Calculates math info of 10 user imputted numbers
// Programmer: Liam Sawyer 
// Date: 11/21/2019 

#include <iostream> // using the iostream preprocessor directive
using namespace std;// using the std namespace for program
int main () // using the main function
{ // beginning block for main function

int number, negative_sum=0, positive_sum=0, sum=0, average_neg=0, average_pos=0, average=0; // decalring all varaibles
int count=0, positiveCount=0, negativeCount=0; // initialize the varaibles
cout << "Please input 10 whole numbers, postive and/or neagtive \n \n(Each number should be separated by space or \nplease hit the enter key after each number \nThe program will automatically calculate \nafter all 10 numbers are entered)\n"; // prompt the user to enter 10 numbers
cout << "\n"; // skip line decorative use

int i=0; // initializer to set up varaibles
while(i<10) // start of while loop if numbers entered are less than 10
 { // start of while loop

cin >> number; // enter a number by user

if (number >= 0 ) // if statement for pos numbers
 { // beginning of if 
     positive_sum += number; // sum of postive numbers
     positiveCount++;  count++; // update the amount of pos num
 } // end of if

 else // else for neg num    
 { // beginning of else 
     negative_sum += number ; // sum of neg numbers
     negativeCount++; count++; // update the amount of neg num
 }  // end of else
 
 i++; // update varaibles for each of 10 numbers
 
 } // end of while loop
if(positiveCount>0) // if statement for postive numbers 
{ // beginning of if 
 average_pos = positive_sum / positiveCount; // calculate average value of all pos num
} // end of if 

if(negativeCount>0) // if statement for negative numbers
{ // beginning of if
average_neg = negative_sum / negativeCount; // calculate average value of all neg num
} // end of if 

sum = positive_sum + negative_sum; // Calculates sum of all numbers

if(count>0) // if statement for number values
{ // beginning of if
  average = sum / count; // calculate average of all numbers
} // end of if 
 cout << " \n"; // output skip line decorative use only
 cout << "The Total sum of 'Positive Numbers' is " << positive_sum << " and the average of \nthe postive numbers entered is "; // states the information about the postive numbers
 cout << average_pos;
 cout << "\n  \n"; // output skip line decorative use only
 cout << "The total sum of 'Negative Numbers' is " << negative_sum << " and the average of  \nthe negative numbers entered is "; // states the information about the negative numbers
 cout << average_neg << endl; 
 cout << "\n  \n"; // output skip line decorative use only
 cout << "The Total sum of all the numbers entered is " << sum << " \nand the average is "<< average << endl; // states what the total sum and average is 

 return 0; // return a 0 to the OS 
 } // end of main function
