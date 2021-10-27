#include <iostream>
using namespace std;

bool isCapitalVowel, isLowerCaseVowel;
char enterchar;

int main()
{
    for (;;)
    {
        cout << "enter a letter: ";
        cin >> enterchar;

        isCapitalVowel = (enterchar == 'A' || enterchar == 'E' || enterchar == 'I' || enterchar == 'O' || enterchar == 'U');
        isCapitalVowel = (enterchar == 'a' || enterchar == 'e' || enterchar == 'i' || enterchar == 'o' || enterchar == 'u');

        if (!isalpha(enterchar))
        {
            cout << enterchar << " is not a Letter!" << endl;
        }

        else if (isLowerCaseVowel || isCapitalVowel)
        {
            cout << enterchar << " is a vowel." << endl;
        }

        else
        {
            cout << enterchar << " is a consonant" << endl;
        }
    }
}
