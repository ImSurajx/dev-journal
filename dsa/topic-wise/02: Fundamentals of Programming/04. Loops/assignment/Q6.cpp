// WAP to print the sum of all the even digits of a given number.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    int sum = 0;
    int digit = 0;
    while (num > 0)
    {
        if((num%10)%2==0){
             sum += num % 10;
        }
        num /= 10;
    }
    cout << "sum of even digits are: " << sum << endl;
    return 0;
}