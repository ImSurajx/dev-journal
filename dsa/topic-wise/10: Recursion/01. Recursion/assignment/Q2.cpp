// ques: wap to calculate the sum of even numbers between a and b (both inclusice) using recursion.
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    if (a > b)
        return 0;
    else if (a % 2 == 0)
    {
        return a + sum(a + 1, b);
    }
    else
    {
        return sum(a + 1, b);
    }
}
int main()
{
    int totalEv = sum(1, 1000);
    cout << "sum is: " << totalEv << endl;
    return 0;
}