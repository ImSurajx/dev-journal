// ques: any year is input through the keyboard. write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter year: ";
    cin >> year;
    if (year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else if (year % 100 == 0)
    {
        cout << year << " is not a leap year." << endl;
    }
    else if (year % 4 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap yaer." << endl;
    }
    return 0;
}