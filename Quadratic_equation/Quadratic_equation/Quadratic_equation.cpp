#include <iostream>
using namespace std;

int a, b, c;
float x1, x2;
float Formula2ndPart, squaredNum;


// enter the first 3 variables to calculate
int enterNum()
{
    cout << "enter first num (a): ";
    cin >> a;

    cout << "enter second num (b): ";
    cin >> b;

    cout << "enter third num (c): ";
    cin >> c;

    return a, b, c;
}

int formula()
{
    // second part of formula
    enterNum();
    squaredNum = (b * b) - (4 * a * c);
    Formula2ndPart = sqrt(squaredNum);

    if (squaredNum > 0)
    {
       //prints 2 different outputs
       x1 = (-b + Formula2ndPart) / (2 * a);
       x2 = (-b - Formula2ndPart) / (2 * a);
       return x1, x2;
    }

    //if the result of Formula2ndPart is a negative num, the number won't be real.
    else
    {
      cout << "ERROR" << endl << "answer is not a real number";
      return 0;
    }

}

int main()
{
    //infinite loop
    for (;;)
    {
        formula();

        if (x1 == 0 && x2 == 0)
        {
            cout << '\n' << endl;
        }

        else
        {
            cout << "The answer of the quadratic equation is = " << x1 << " & " << x2 << '\n' << endl;
        }     
    }

    return 0;
}
