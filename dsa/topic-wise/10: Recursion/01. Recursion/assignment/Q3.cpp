// ques: calculate the number of ways in which a person can climb n stairs if he can exactly 1,2, or 3 step at each level
#include <iostream>
using namespace std;
int ways(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    return ways(n - 1) + ways(n - 2) + ways(n - 3);
}
int main()
{
    int totalWays = ways(7);
    cout << "total ways are: " << totalWays << endl;
    return 0;
}