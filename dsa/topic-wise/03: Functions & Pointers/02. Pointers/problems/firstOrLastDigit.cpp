#include <iostream>
using namespace std;
void digits(int &num, int &firstDigit, int &lastDigit)
{
    int temp = num;
    lastDigit = temp % 10;
    while (temp > 0)
    {
        firstDigit = temp % 10;
        temp /= 10;
    }
}
int main()
{
    int num, firstDigit, lastDigit;
    cout << "enter a number: ";
    cin >> num;
    digits(num, firstDigit, lastDigit);
    cout << "first digit is: " << firstDigit << endl;
    cout << "last digit is: " << lastDigit << endl;
    return 0;
}