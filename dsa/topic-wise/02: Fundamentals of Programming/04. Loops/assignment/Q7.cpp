// WAP to print the sum of a given number and its reverse.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    int tempNum = num;
    int reverseNum = 0;
    int lastDigit = 0;
    while (num > 0)
    {
        /*
        algorithm:
        - calculate last digiit
        - multiply reverse digit by 10 & add lastdigit
        - remove last digit of exisiting number
        */
        lastDigit = num % 10;
        reverseNum = reverseNum * 10 + lastDigit;
        num /= 10;
    }
    cout << "sum of the number & it's reverse is: " << reverseNum + tempNum << endl;
    return 0;
}