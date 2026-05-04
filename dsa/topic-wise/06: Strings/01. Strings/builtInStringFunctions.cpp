#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "suraj kumar";
    cout << str.size() << endl;   // give size of string excludes null character
    cout << str.length() << endl; // give length of string excludes null character
    str.push_back('x');           // add a char at the end of string
    cout << str << endl;
    str.pop_back(); // remove a char from string
    cout << str << endl;
    // + operators
    string s = "abc";
    cout << s << endl;
    string t = "def";
    s = s + t;
    cout << s << endl;
    s = s + "xyz"; // concat string
    cout << s << endl;
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}