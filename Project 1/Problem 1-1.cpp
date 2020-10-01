/*   CMPT101 HW1, Problem1-1.cpp
	Purpose: Creates pattern from users input letter
	Programmer: Liam Sawyer
	Date: 9/13/2019
*/

#include <string> /* preprocessor directive */
#include <iostream> /* preprocessor directive */

using namespace std; /* using the std namespace for program */

int main() /* beginning of the function called main */

{ /* beginning of block for main */

	char let; /* define the variable "let" to a character */

	cout << "What is your favorite letter \n"; /* output statement with skip a line at the end of it */
	cin >> let; /* input statement from user which will be defined as the varibale "let" */
	cout << "-----------" << endl; /* output statement for design purpose */
	cout << "  " << let << let << let << " " << endl; /* output statement with spaces and the varible "let" and starts a new line after with endl manipulator */
	cout << " " << let << " " << " " << " " << let << endl; /* output statement with spaces and the varible "let" and starts a new line after with endl manipulator */
	cout << let << endl; /* output statement with the varible "let" and starts a new line after with endl manipulator */
	cout << let << endl; /* output statement with the varible "let" and starts a new line after with endl manipulator */
	cout << let << endl; /* output statement with the varible "let" and starts a new line after with endl manipulator */
	cout << let << endl; /* output statement with the varible "let" and starts a new line after with endl manipulator */
	cout << let << endl; /* output statement with the varible "let" and starts a new line after with endl manipulator */
	cout << " " << let << " " << " " << " " << let << endl; /* output statement with spaces and the varible "let" and starts a new line after with endl manipulator */
	cout << "  " << let << let << let << " " << endl; /* output statement with spaces and the varible "let" and starts a new line after with endl manipulator */
	cout << "-----------" << endl; /* output statement for design purpose */
	cout << "Here is a special pattern with your favorite letter!\n"; /* output statement with skip a line at the end of it that will display the full pattern with users chosen letter */

	return 0; /* send 0 to operating system */

} /* end of block for main */

