// 633. Sum of Square Numbers
#include <iostream>
using namespace std;
bool judgeSquareRoot(int c)
{
    long long x = 0;
    long long y = sqrt(c);
    while (x <= y)
    {
        long long sum = x * x + y * y;
        if (sum == c)
        {
            return true;
        }
        else if (sum < c)
        {
            x++;
        }
        else
        {
            y--;
        }
    }
    return false;
}
int main()
{
    int c;
    cout << "enter value: ";
    cin >> c;
    bool flag = judgeSquareRoot(c);
    cout << "is sum of perfect square possible: " << flag << endl;
    return 0;
}