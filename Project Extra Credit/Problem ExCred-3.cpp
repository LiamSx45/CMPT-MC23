// CMPT101 Extra Credit, ExCred1-3.cpp 
// Purpose: Show even/odd numbers and sum
// Programmer: Liam Sawyer 
// Date: 11/22/2019 

#include <iostream> //using the iostream preprocessor
#include <string> //using the string preprocessor
using namespace std; // using the std namespace for program
int main() { // using main function
    string num; // string variable of num
    string a = "even"; // string variable a and defining it
    string b = "odd"; // string variable b and defining it
    cout << "Please enter whether you want to see even or odd numbers." << endl; // output text asking user for input
    cin >> num; // input text from user
    while (num != a && num != b){ // while loop of neither even or odd is entered
        cout << "That is an invalid input, please reenter either even or odd." << endl; // output text reprompting user 
        cin >> num; // input text from user
    } // end block for while loop
    
     if(num == a){ // if statement for even number
        cout << "2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100" << endl; // displays even numbers in the range
         int sumeven = 2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 + 20 + 22 + 24 + 26 + 28 + 30 + 32 + 34 + 36 + 38 + 40 + 42 + 44 + 46 + 48 + 50 + 52 + 54 + 56 + 58 + 60 + 62 + 64 + 66 + 68 + 70 + 72 + 74 + 76 + 78 + 80 + 82 + 84 + 86 + 88 + 90 + 92 + 94 + 96 + 98 +100; // int of sum and calculating it 
         cout << "The sum is " << sumeven << endl; //output text for sum of even numbers
         
    } // end block for if 
    else if(num == b){ // if statement for odd number
           cout << "1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, and 99" << endl; // displays odd numbers in the range
        int sumodd = 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 + 21 + 23 + 25 + 27 + 29 + 31 + 33 + 35 + 37 + 39 + 41 + 43 + 45 + 47 + 49 + 51 + 53 + 55 + 57 + 59 + 61 + 63 +65 + 67 + 69 + 71 + 73 + 75 + 77 + 79 + 81 + 83 + 85 + 87 + 89 + 91 + 93+ 95 + 97 + 99;// int of sum and calculating it
        cout << "The sum is " <<sumodd << endl; //output text for sum of odd numbers
       } // end of else if statement
} // end of main 

