// ques: wap to input month numbers(1-12) and print total no of days in month using switch case.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter month number: ";
    cin >> num;
    // 1, 3, 5, 7, 8, 10 , 12
    // 4, 6, 9, 11
    // 2
    switch ((num <= 7 && num % 2 != 0) || (num >= 8 && num % 2 == 0))
    {
    case 1:
        cout << "31" << endl;
        break;
    }
    switch (num == 6 || num == 6 || num == 9 || num == 11)
    {
    case 1:
        cout << "30" << endl;
        break;
    }
    switch (num == 2)
    {
    case 1:
        cout << "28" << endl;
        break;
    }
    return 0;
}