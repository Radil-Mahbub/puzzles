#include <iostream>
using namespace std;

int input, Remainder; 
int reversedNum = 0;

int main()
{
	cout << "Enter a number of at least 2 digits in length: ";
	cin >> input;

	if (input <= 10)
	{
		cout << "put in another number." << endl;
	}

	else
	{
		while (input != 0)
		{
			Remainder = input % 10;
			reversedNum = reversedNum * 10 + Remainder;
			input /= 10;
		}
		cout << "reversed number = " << reversedNum << endl;
	}
}