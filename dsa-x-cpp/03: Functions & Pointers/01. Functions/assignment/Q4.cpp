// Write a function to count the number of digits in a number and then print the square of this number.
#include <iostream>
using namespace std;
int countDigit(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    cout << "square of number of digit is: " << (countDigit(num) * countDigit(num)) << endl;
    return 0;
}