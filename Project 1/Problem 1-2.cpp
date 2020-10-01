/*  CMPT101 HW1, Project1-2.cpp
	Purpose:Shows monetary value of coins
	Programmer: Liam Sawyer
	Date: 9/13/2019
*/

#include <iostream> /* using the iostream preproccesor directive*/

using namespace std; /* using the std namepspace for program */

int main() /* using the main function*/
{ /* beginning block for main function */
	int num_quarters, num_dimes, num_nickles, total; /* declaring the variables for the coins */
	int quarters = 25, dimes = 10, nickles = 5; /* declaring the variables for the coin and stating what integer they are equal to */

	cout << "How much money are your coins woth?\n\nTo begin, type the amount of quarters that you have and then press enter!" << endl; /* output text welcoming user and giving them a prompt as to what to type */
	cin >> num_quarters; /* input text from user and assigning it to the varible */
	cout << "Now enter the amount of dimes you have and press enter after!" << endl; /* output text asking user to type amount in */
	cin >> num_dimes; /* input text from user and assigning it to the varible */
	cout << "Lastly, enter the amount of nickles that you have and press enter!" << endl; /* output text asking user to type amount in */
	cin >> num_nickles; /* input text from user and assigning it to the varible */

	total = (quarters * num_quarters) + (dimes * num_dimes) + (nickles * num_nickles); /* calculation of total amount of coins and assigning it to the total variable */

	cout << "The Monetary value is " << total << " cents.\n"; /* output text stating what the amount is in coins */

	return 0; /* returns a 0 to the OS*/
} /* end block for main function */
