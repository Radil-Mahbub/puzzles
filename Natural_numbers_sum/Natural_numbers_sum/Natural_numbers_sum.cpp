#include <iostream>
using namespace std;

int enterMaxNum;
int addNum;

int main()
{
 	cout << "enter a number: ";
	cin >> enterMaxNum;

	for (int i = 0; i <= enterMaxNum; i++) // adds all numbers before it
	{
		addNum += i;
		cout << "sum of entered num and all numbers before it:" << addNum << '\n';
	}

	return 0;
}    
