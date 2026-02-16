#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "suraj kumar";
    int count = 0;
    cout<<str<<endl;
    str[0] = 'd'; // in c++ string are mutable
    cout<<str<<endl;
    return 0;
}