#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter a even length string: ";
    getline(cin, str);
    cout << str << endl;
    reverse(str.begin(), (str.begin() + (str.length() / 2)));
    cout << str << endl;
    return 0;
}