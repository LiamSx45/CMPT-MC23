#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
  ofstream multiply;
  multiply.open("multiply.txt");
	multiply << setfill('-') << setw(80) << "-" << endl;
	multiply << setfill(' '); // change filliing character back to space

	multiply << "  ";
	for (int i = 1; i <= 9; i++)
		multiply << setw(8) << i;
	multiply << endl;

	multiply << setfill('-') << setw(80) << "-" << endl;
	multiply << setfill(' '); // change filliing character back to space

	for (int row = 1; row <= 9; row++)
	{
		multiply << row << ":";
		for (int col = 1; col <= 9; col++)
			multiply << setw(8) << row*col;
		multiply << endl;
	}
	return 0;
}
