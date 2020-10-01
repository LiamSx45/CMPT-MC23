/*   CMPT101 HW5, Problem2.cpp
Purpose: converting numbers into letters
Programmer: Liam Sawyer
Date: 10/31/2019
*/

#include <iostream> // using the iostream preprocessor directive
#include <cstdlib> // using the cstdlib preprocessor directive
#include <ctime> // using the ctime preprocessor directive
using namespace std; // using the std namespace for program
int main() // using main function
{ // beginning block for main function
    srand( static_cast<unsigned int>(time(NULL))); // using srand to generate random numbers
    int r = rand() % 100 + 1; // using random numbers from 0 to 100
    cout << r << endl; // output of the random number
    
    (r > 90)? r =0: (r >80)? r =1: (r > 70)? r = 2: (r>60)? r = 3: (r>50)? r = 4: (r> 40)? r=5: (r>30)? r = 6: (r> 20)? r = 7: (r> 10)? r = 8: r=9; // Rules for random number values and what lette they equal
    switch(r) // Calling switch function
    { // beginning block for switch function
        case 0: // starting case for Letter A
            cout << "A" << endl; // output text for letter that corresponds to number
            break; // end the switch
        case 1: // case number
            cout << "B" << endl; // output text for letter that corresponds to number
            break; // end the switch
        case 2: // case number
            cout << "C" << endl; // output text for letter that corresponds to number
            break; // end the switch
        case 3: // case number
            cout << "D" << endl; // output text for letter that corresponds to number
            break; // end the switch
        case 4: // case number
            cout << "E" << endl; // output text for letter that corresponds to number
            break; // end the switch
        case 5: // case number
            cout << "F" << endl; // output text for letter that corresponds to number
            break; // end the switch
        case 6: // case number
            cout << "G" << endl; // output text for letter that corresponds to number
            break; // end the switch
        case 7: // case number
            cout << "H" << endl; // output text for letter that corresponds to number
            break; // end the switch
        case 8: // case number
            cout << "I" << endl; // output text for letter that corresponds to number
            break; // end the switch
        default: // case default
            cout << "J" << endl; // output text for letter that corresponds to number
            break; // end the switch
    } // end block for switch function
} // end block for main function
