#include <iostream>
using namespace std;
// int arrangeCoins(int n)
// {
//     int count = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n - i >= 0)
//         {
//             n -= i;
//             count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     return count;
// }

int arrangeCoins(int n)
{
    int low = 1;
    int high = n;
    int ans = -1;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if ((mid * (mid + 1) / 2) <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n = 10;
    int possibleStairs = arrangeCoins(n);
    cout << "possible staircase are: " << possibleStairs << endl;
}