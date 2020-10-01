/*  
CMPT101 HW2, Project2-1.cpp
Purpose: Displays average of 5 preselected values
Programmer: Liam Sawyer
Date: 9/24/2019
*/

#include <iostream> /* using the iostream preprocessor directive*/
using namespace std; /* using the std namespace for program*/

int main() /* using main function block */
{ /* beginning block for main function */
	int val1 = 21, val2 = 32, val3 = 37, val4 = 24, val5 = 55; /* declaring the variables for the 5 numbers and assigning them a value */
	int sum = val1 + val2 + val3 + val4 + val5; /* declaring the variable for the sum of all 5 vlaues */ 
	double average = sum / 5; /* using double data type and declaring a value for the average of the 5 values*/

	cout << "The sum of " << val1 << "+" << val2 << "+" << val3 << "+" << val4 << "+" << val5 << "=" << sum << endl; /* output text saying what the sum of the 5 vlaues are */

	cout << "The average is: " << average << endl; /* output text telling the user what the average is*/

	return 0; /* returns a 0 to the OS*/

} /* end block for main function */
