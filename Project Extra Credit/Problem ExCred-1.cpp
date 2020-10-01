// CMPT101 Extra Credit, ExCred-1.cpp 
// Purpose: Display Pattern based on user selection
// Programmer: Liam Sawyer 
// Date: 11/22/2019 
#include <iostream> //using the iostream preprocessor
using namespace std; // using the std namespace for program
int main() // using main function
{ // beginning block for main function
    int a; // declaring int
    cout << "Please enter either 3,5, or 7." << endl; // output asking person for a prompt
    cin >> a; // user imput 
    if(a==7){ // if picked number 7, show this pattern
        cout << "1" << endl;
        cout << "12" <<endl;
        cout << "123" <<endl;
        cout << "1234" <<endl;
        cout << "12345" <<endl;
        cout << "123456" <<endl;
        cout << "1234567" <<endl;
    } // end block of if statement
    else if (a==3){ // else if picked number 3, display this pattern
        cout << "1" << endl;
        cout << "12" <<endl;
        cout << "123" <<endl;
    } // end block of else if 
    else if (a == 5){ // else if picked number 5, display this pattern
        cout << "1" << endl;
        cout << "12" <<endl;
        cout << "123" <<endl;
        cout << "1234" <<endl;
        cout << "12345" <<endl;
    } // end block of else if 
    else { // else statement if person did not pick a 3 5 or 7
        cout << "Please enter either 3,5, or 7." << endl;
    } // end block of else
} // end block of main function 
