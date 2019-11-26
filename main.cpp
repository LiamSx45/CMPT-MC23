#include <iostream>
#include <iomanip>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
  cout << "Now writing data to the file.........................................." << endl;
  cout << "                             " << endl;
    ofstream OutFile("random.txt");
    for (int i = 0; i < 100; i++)
    OutFile << rand() % (25 - 11 + 1) + 11 << '\n';
    OutFile.close();
    cout << "Done with the writing..........................................." << endl;
    cout << "                             " << endl;

    cout << "Now reading data fron the file..........................................." << endl;
    cout << "                             " << endl;
    int n, r;
    double d, sum;
    FILE *f;
    f = fopen("random.txt","r");
    n = 0;
    sum = 0.0;
    while (1) {
        r = fscanf(f, "%lf", &d);
        if (1 == r) 
        {
            sum += d;
            n++;
        }
        else if (0 == r) {
            fscanf(f, "%*c");
        }
        else break;
    }
    fclose(f);
    cout << "The average value of all 100 numbers is: " << sum / n << endl;
    cout << "                             " << endl;

    int sum1 = 0;
    ifstream infile("random.txt");
    int number;
    infile >> number;
    while (!infile.eof())
    {
        if (number == 16)
        {
            sum1++;
        }
        infile >> number;
    }
    cout << "The number 16 appears " << sum1 << " times in the file" << endl;

	return 0;
}
