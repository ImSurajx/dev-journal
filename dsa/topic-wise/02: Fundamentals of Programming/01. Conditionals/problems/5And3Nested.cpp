// ques: take positive integer input and tell if it is divisible by 5 & 3.
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number: ";
    int num;
    cin >> num;
    if (num % 5 == 0)
    {
        if (num % 3 == 0)
        {
            cout << num << " is divisible by 5 & 3." << endl;
        }
        else
        {
            cout << "not matching conditions." << endl;
        }
    }
    else
        cout << "not matching conditions." << endl;
    return 0;
}