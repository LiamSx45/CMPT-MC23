/*
	CMPT101 HW2, Project2-2.cpp
	Purpose: User defined Radius and Height to get Volume + Area
	Programmer: Liam Sawyer
	Date: 9/24/2019
*/

#include <iostream> /* using the iostream preprocessor directive*/

using namespace std; /* using the std namepspace for program */ 
const float Pi = 3.14159; /* Defining Pi as a constant and giving it a value*/

int main() /* using the main function*/
{ /* beginning block for main function */

	float area, volume, r, radius, h; /* uing float for the variables that are needed in the area and volume */

	cout << "We will find the volume and surface area of a cylinder, Please input the Radius Value" << endl; /* output text asking for the radius value*/
	cin >> r; /* Input text for the user defined radius value */
	radius = r * r; /* calculation for r^2 to use in volume */
	cout << "Please input the Height now" << endl; /* output asking for height value */
	cin >> h; /* input text for user defined value of height for h*/
	volume = Pi * radius * h; /* defining volume to an equation */
	cout << "The volume of the Cylinder is: " << volume << endl; /* output text stating what the volume is*/
	area = (2*Pi*r*h) + (2*Pi*radius); /* defining area with an equation*/
	cout << "The Surface area is: " << area; /* output text stating what the area is*/

	return 0; /* returns a 0 to the OS*/
} /* end block for main function*/
