// ques: take positive integer input and tell if it is divisible by 5 or 3.
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number: ";
    int num;
    cin >> num;
    if (num % 5 == 0 || num % 3 == 0)
    {
        if (num % 15 != 0)
        {
            cout << num << " is divisible by 5 or 3 but not 15." << endl;
        }
        else
        {
            cout << "not matching the condition." << endl;
        }
    }
    else
    {
        cout << "not matching the condition." << endl;
    }
    return 0;
}