#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter a even length string: ";
    getline(cin, str);
    cout << str.substr((str.length()/2)) << endl;
    return 0;
}