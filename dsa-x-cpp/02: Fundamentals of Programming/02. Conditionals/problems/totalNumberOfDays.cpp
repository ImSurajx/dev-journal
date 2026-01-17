// ques: wap to input month numbers(1-12) and print total no of days in month using switch case.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter month number: ";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "January: 31" << endl;
        break;
    case 2:
        cout << "Feburary: 28" << endl;
        break;
    case 3:
        cout << "March: 31" << endl;
        break;
    case 4:
        cout << "April: 30" << endl;
        break;
    case 5:
        cout << "May: 31" << endl;
        break;
    case 6:
        cout << "June: 30" << endl;
        break;
    case 7:
        cout << "July: 31" << endl;
        break;
    case 8:
        cout << "August: 31" << endl;
        break;
    case 9:
        cout << "September: 30" << endl;
        break;
    case 10:
        cout << "October: 31" << endl;
        break;
    case 11:
        cout << "November: 30" << endl;
        break;
    case 12:
        cout << "December: 31" << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
        break;
    }
    return 0;
}