// ques: given a positive integer, return trye if it us a power of 2;
#include <iostream>
using namespace std;
bool checkPowerOfTwo(int n)
{
    if (n == 1)
        return true;
    if (n % 2 == 0)
    {
        return checkPowerOfTwo(n / 2);
    }
    return false;
}
int main()
{
    bool flag = checkPowerOfTwo(16);
    cout << flag << endl;
}