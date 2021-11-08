#include <iostream>
using namespace std;

int Year;

int main()
{
    cout << "enter a year: ";
    cin >> Year;

    if (Year > 1300)
    {
        if (Year % 4 == 0)
        {
            cout << Year << " is a leap year" << endl;
        }

        else
        {
            cout << Year << " is not a leap year" << endl;
        }
    }

    else
    {
        cout << "enter a year after the 12th century" << endl;
    }
}