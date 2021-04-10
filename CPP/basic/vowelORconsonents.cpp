#include <iostream>
using namespace std;

int main()
{
    char c;

    cout << "Enter any character to check :: ";
    cin >> c;


    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
         cout<<"\nThe Entered Character [ "<<c<<" ] is a Vowel.\n";
    }
    else
    {
         cout<<"\nThe Entered Character [ "<<c<<" ] is a Consonant.\n";
    }


    return 0;
}