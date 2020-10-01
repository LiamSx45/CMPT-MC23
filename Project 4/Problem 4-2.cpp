/*
CMPT101 HW4, Project4-2.cpp
Purpose: Program Calculates shipping charges for company
Programmer: Liam Sawyer
Date: 10/08/2019
*/
#include <iostream> /* using the iostream preprocessor directive*/
#include <iomanip> /* using the iomanip preprocessor directive*/
using namespace std; /* using the std namespace for program*/
int main() /* using the main function*/
{ /* beginning block for main function */	
	const int weight_min = 0, weight_max = 20, dist_min = 10, dist_max = 3000; /* defining constant integers such as min weight, max weight, min distance, mac distance per the companies shipping policy*/
	float pack_weight, distance, total_charge; /* Using float to define varaibles such as package weight, distance shipped, and the total charge for shipping*/
	cout << "\n| The Fast Freight Shipping Compnay charges the following rates: |\n"; /* Using chart in company policy to display it to user */
	cout << "|----------------------------------------------------------------|\n"; /* Using chart in company policy to display it to user */
	cout << "| Weight of Package (in Kilograms) || Rate per 500 Miles Shipped |\n"; /* Using chart in company policy to display it to user */
	cout << "|**********************************||****************************|\n"; /* Using chart in company policy to display it to user */
	cout << "| 2Kg or less                      || $1.10                      |\n"; /* Using chart in company policy to display it to user */
	cout << "| Over 2Kg but no more than 6Kg    || $2.20                      |\n"; /* Using chart in company policy to display it to user */
	cout << "| Over 6Kg but no more than 10Kg   || $3.70                      |\n"; /* Using chart in company policy to display it to user */
	cout << "| Over 10Kg but no more than 20Kg  || $4.80                      |\n"; /* Using chart in company policy to display it to user */
	cout << "*----------------------------------------------------------------*\n"; /* Using chart in company policy to display it to user */
	cout << "\nYou can use our calculator to find the shipping cost for your package!\n"; /* Informing user what this program does */
	cout << "Just answer a few questions and we will give you an estimate.\n"; /* asking user for participation*/
	cout << "\nWhat is the weight (Kg) of the package? \n"; /* asking user for weight of package they are sending */
	cin >> pack_weight; /* input weight user entered and storing it inside the pack_weight variable*/
	if (pack_weight <= weight_min || pack_weight > weight_max) /* if statement for package weight if its below the min or above the max*/
	{ /* beginning block for if statement*/
		cout << "\nWe're sorry, package must be greater than 0Kg but less than 20Kg\n"; /* sends ERROR to user and explains why */
		cout << "\nPlease re-run program to try again\n" << endl; /* asks user to restart program */
	} /* end block for if statement*/
	else /* if weight is correct then asks for distance */
	{ /* beginning block for else statement*/
		cout << "\nWhat is the shipping distance (miles)? \n"; /* asks user for distance to ship*/
		cin >> distance; /* stores input to distance variable*/
		if (distance < dist_min || distance > dist_max) /* distance is less than min or greater than the max */
		{ /* beginning block for if statement*/
			cout << "\nWe're sorry, the distance must be greater than 10 miles but less than 3,000 miles\n"; /* sends ERROR to user and explains why */
			cout << "\nPlease re-run program to try again\n" << endl; /* asks user to restart program */
		} /* end block for if statement*/
		else /* if weight and distance is correct, then it goes to the charges as defined by policy above*/
		{ /* beginning block for else statement*/
			if (pack_weight <= 2) /* if weight is less than 2kg*/
				total_charge = (distance / 500) * 1.10; /* total charge is distance per 500 miles multipled by the rate*/
			else if (pack_weight > 2 && pack_weight <= 6) /* if weight is between 2kg and 6kg*/
				total_charge = (distance / 500) * 2.20; /* total charge is distance per 500 miles multipled by the rate*/
			else if (pack_weight > 6 && pack_weight <= 10) /* if weight is between 6kg and 10kg*/
				total_charge = (distance / 500) * 3.70; /* total charge is distance per 500 miles multipled by the rate*/
			else if (pack_weight > 10 && pack_weight <= 20) /* if weight is between 10kg and 20kg*/
				total_charge = (distance / 500) * 4.80; /* total charge is distance per 500 miles multipled by the rate*/
			cout << setprecision(2) << fixed /* sets precision to 2 spaces after decimal*/
				<< "\nTotal charges are $" << total_charge /* outputs the total charge*/
				<< "\nFor a distance of " << distance /* explains charge is for distance they inputed*/
				<< " miles\nand a total weight of " << pack_weight << "Kg.\n" /* explains charge is for weight they inputed*/
				<< "\nThank You for using The Fast Freight Shipping Company" << endl; /* Thanks user for using program*/
		} /* end block for else statement*/
	} /* end block for else statement*/

	return 0; /* Retunrs 0 to the OS*/

} /* ending block for main function */
