#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x;
    cout<<"enter a number: ";
    cin>>x;
    string str = to_string(x);
    cout << "number of digits are: "<< str.length() << endl;
    return 0;
}