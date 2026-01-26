// sum of total number of digit
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
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
        lastDigit = num%10;
        reverseNum = reverseNum * 10 + lastDigit;
        num /= 10;
    }
    cout << "reverse of the number is: " << reverseNum << endl;
    return 0;
}