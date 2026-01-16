// ques: take positive integer input and tell if it is a three digit number or not.
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number: ";
    int num;
    cin >> num;
    if (num > 99 && num <= 999)
        cout << num << " is three digit number." << endl;
    else
        cout << num << " is not a three digit number." << endl;
    return 0;
    return 0;
}