#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;
    n += sum(n - 1);
    return n;
}
int main()
{
    int totalSum = sum(10);
    cout << "total sum is: " << totalSum << endl;
    return 0;
}