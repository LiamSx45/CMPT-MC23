// CMPT101 Project 7, Project 7-2.cpp 
// Purpose: Output 100 rand numb to .txt file then read results
// Programmer: Liam Sawyer 
// Date: 11/26/2019 

#include <iostream> //using the iostream preprocessor
#include <iomanip> //using the iomanip preprocessor
#include <fstream> //using the fstream preprocessor
#include <time.h> //using the time.h preprocessor
#include <stdlib.h> //using the stdlib.h preprocessor
#include <stdio.h> //using the stdio.h preprocessor

using namespace std; // using the std namespace for program

int main() //using main function
{ //beginning block for main function
  cout << "Now writing data to the file.........................................." << endl; // output text telling user what is going on
  cout << "                             " << endl; //output text for decorative use only
    ofstream OutFile("random.txt"); // creating file called random.txt
    for (int i = 0; i < 100; i++) // for loop, numbers from 0-100
    OutFile << rand() % (25 - 11 + 1) + 11 << '\n'; // writing rand numbers from 0-25 in txt doc
    OutFile.close(); //closing doc
    cout << "Done with the writing..........................................." << endl; // output text telling user what is going on
    cout << "                             " << endl; //output text for decorative use only

    cout << "Now reading data fron the file..........................................." << endl; // output text telling user what is going on
    cout << "                             " << endl; //output text for decorative use only
    int n, r; //definning varaibles as intergers for n and r
    double d, sum; // double variable for d and sum
    FILE *f; // file multipled by pFile(f)
    f = fopen("random.txt","r"); // f opens the file with the "r" mode
    n = 0; // begins at 0
    sum = 0.0; // decimal points for sum starting at 0
    while (1) { // while loop for numbers
        r = fscanf(f, "%lf", &d); // scans the doc for such info
        if (1 == r) // if number then calulate sum
        {
            sum += d; // adding all numbers
            n++; //total numbers
        }
        else if (0 == r) { // else if function
            fscanf(f, "%*c"); // scans file
        }
        else break; //stops else function
    }
    fclose(f); // closes doc
    cout << "The average value of all 100 numbers is: " << sum / n << endl; // output text telling user what the average of all num are
    cout << "                             " << endl; //output text for decorative use only

    int sum1 = 0; // sum 1 is how many times 16 appears
    ifstream infile("random.txt"); // looks at file for certain criteria
    int number; // defining variable as int type 
    infile >> number; //num in file greater than the number
    while (!infile.eof()) // if numbers are in file
    {
        if (number == 16) // if number is equal to 16
        {
            sum1++; // counts how many times 16 appears
        }
        infile >> number; //num in file greater than the number
    }
    cout << "The number 16 appears " << sum1 << " times in the file" << endl; //output text telling user how many times 16 appears

  return 0; // returns 0 to OS
}

