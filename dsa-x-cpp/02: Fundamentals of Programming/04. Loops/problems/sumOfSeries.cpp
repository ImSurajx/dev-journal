// ques: print the sum of this series, 1 - 2 + 3 - 4 + 5 - 6.. upto n
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "enter a number: ";
    cin >> num;
    // ineficient method
    // for (int i = 1; i <= num; i++)
    // {
    //     if (i % 2 != 0) sum += i;
    //     else sum -= i;
    // }
    if (num % 2 == 0)
        sum = -num / 2;
    else
        sum = -num / 2 + num;
    cout << "sum is: " << sum << endl;
    return 0;
}