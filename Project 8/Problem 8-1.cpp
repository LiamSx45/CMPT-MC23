// CMPT101 HW8, Project8-1.cpp 
// Purpose: Create Triangle Pattern 
// Programmer: Liam Sawyer 
// Date: 12/09/2019 

#include <iostream> // using the iostream preprocessor directive
using namespace std; // using the std namespace for program
void triangle(int rows){ //void function for pattern making
    for (int i = 1; i <= rows; i++){ //for statement that starts with a row but can increase
        for(int j=1; j<=i; j++){ //increases the number until it equals i
            cout << j; //output text
        }
        cout << endl; //output 
    }
}
int main() { //main function
    int a; //intizes a interger a 
    int b; //intizes a interger b
    string pattern2; 
    cout << "Please enter the number of rows you want." << endl; //output text
    cin >> a; //input rows for triangle 2
    cout << "Do you want to see two patterns?" << endl;
    cin >> pattern2; //input text for another pattern
    if(pattern2 != "yes"){ //if the user does not input yes
        triangle(a); //prints a triangle with a rows
    }
    else { //if the users enters yes this will run
        cout << "Please enter the number of rows you want for pattern two." << endl; //output text asking for another triangle
        cin >> b; //input for number rows triangle 2
        triangle(a); //prints a triange with a rows
        triangle(b); //prints a triangle with b rows
    }
    
    return 0;
}
