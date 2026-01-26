// ques: print the factorial of a given number 'n';
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "enter a number: ";
    cin >> num;
    int factorial = 1;
    while (num > 0)
    {
        factorial *= num;
        num--;
    }
    cout << "factorial is: " << factorial << endl;
    return 0;
}