#include <iostream>
using namespace std;

int enternum;

int main()
{
	cout << "entera positive number: ";
	cin >> enternum;

	for (int i = 1; i < 11; i++)
	{
		cout << enternum << "*" << i << "=" << enternum * i << endl;
	}

	return 0;
}