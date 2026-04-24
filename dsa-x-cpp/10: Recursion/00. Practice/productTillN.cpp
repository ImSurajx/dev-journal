#include <iostream>
using namespace std;
int productTillN(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = n * productTillN(n - 1);
    cout << ans << " ";
    return ans;
}
int main()
{
    int productOfN = productTillN(5);
    // cout << productOfN << endl;
    return 0;
}