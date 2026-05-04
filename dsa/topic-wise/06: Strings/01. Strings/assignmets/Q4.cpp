/*
Ques: Input a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter a even length string: ";
    getline(cin, str);
    cout << str << endl;
    reverse((str.begin()+(str.length()/2)), str.end());
    cout << str << endl;
    return 0;
}