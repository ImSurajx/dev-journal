// ques: wap to create a calulator that performs basic arithmetic operations, using switch case add function. the calulator should input numbers and an operator from user.
#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char ch;
    cout << "enter expression: ";
    cin >> num1 >> ch >> num2;
    switch (ch)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 / num2 << endl;
        break;

    default:
        cout << "invalid operator." << endl;
        break;
    }
    return 0;
}