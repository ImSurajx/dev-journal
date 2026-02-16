/*
Check whether the given string is palindrome or not.
Input : "abcde"
Output : No
Input : "abcdcba"
Output : Yes
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter a string: ";
    string str;
    getline(cin, str);
    string strd = str;
    reverse(str.begin(), str.end());
    if (str == strd)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}