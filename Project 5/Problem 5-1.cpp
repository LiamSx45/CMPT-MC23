/*   CMPT101 HW5, Problem1.cpp
Purpose: solving the quadratic formula
Programmer: Liam Sawyer
Date: 10/31/2019
*/
#include <iostream> // using the iostream preprocessor directive
#include <cmath> // using the cmath preprocessor directive
using namespace std; // using the std namespace for program

int main() // using main function
{ // beginning block for main function
    char s; // assigning s to the char variable type
    double a, b, c; // assigning a, b, c to the double variable type
    cout << "Please enter an integer for a." << endl; // output asking for number
    cin >> a; // input for letter a
    cout << "Please enter an integer for b." << endl; // output asking for number
    cin >> b; // input for letter b
    cout << "Please enter an integer for c." << endl; // output asking for number
    cin >> c; // input for letter c
    
    int D = (b*b) - (4 * a * c); // integer variable for D which equals the formula for the discriminant
    
    double solution = (-b + sqrt(D)) / (2*a); // double variable type for root 1
    double solutions = (-b - sqrt(D)) / (2*a); // double variable type for root 2
    
    (D ==0)? s =0: (D>0)? s=1: s = 2; // What the value of the discriminant is
    
    switch (s) { //beginning of switch function
        case 0: // Case if there is only one real solution
            cout << "There is one real solution to the quadratic." << endl; //output text stating what the solution is
            cout << "The answer is " << solutions << "." << endl;
            break; // end the switch
        case 1: // Case if there is two real solutions
            cout << "There is two real solutions." << endl; //output text stating what the solution is
            cout << "The answers are " << solution << " and " << solutions << "." << endl;
            break; // end the switch
        case 2: // Case if there is no real solutions
            cout << "There are no real solutions." << endl; //output text stating that there are no solutions
            break; // end the switch
        } // end block for switch function
} // end block for main function
