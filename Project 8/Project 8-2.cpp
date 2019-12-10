#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
	int Num;

		cout << "This program will let you know if a certain number is a  "
			 << "prime number.\nEnter a number: ";
		cin  >> Num;

	cout << "The number " << Num;

	if (isPrime(Num))
	{
		cout << " is a Prime number. To test another number, run the program again!" << endl;
	}
	else
		cout << " is not a Prime number. To test another number, run the program again!" << endl;

	return 0;
}

bool isPrime(int Num)
{
	if (Num > 1)
	{
		for (int i = 2; i <= Num; ++i)
		{
			
			if (Num % i == 0)
			{
				if(Num == i)
					return true;
				else
					return false;
			}
	
		}
	}
	return false;
}
