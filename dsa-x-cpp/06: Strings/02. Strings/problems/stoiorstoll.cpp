#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string to integer
    string str = "123456";
    int x = stoi(str);
    cout << x << endl;

    // integer to string
    int num = 123455689;
    string snum = to_string(num);
    cout << num << endl;

    // string to long-long
    string s = "1234567890123455";
    long long z = stoll(s);
    cout << s << endl;

    return 0;
}