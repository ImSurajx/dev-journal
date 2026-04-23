// ques: wap to calculate the sum of odd numbers between a and b (both inclusice) using recursion.
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    if (a > b)
        return 0;
    if (a % 2 != 0)
    {
        return a + sum(a + 1, b);
    }
    return sum(a + 1, b);
}
int main()
{
    int total = sum(1, 5);
    cout << "sum is: " << total << endl;
    return 0;
}