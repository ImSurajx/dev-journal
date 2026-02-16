#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter a string: ";
    getline(cin, str);
    cout << str << endl;
    reverse(str.begin()+2, (str.begin()+5));
    cout << str << endl;
    return 0;
}