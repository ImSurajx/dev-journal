// ques: calculate the space complexity for the below nested loop code snippet
// space complexity : O(n+m);
// time complexity : O(nxm);
#include <iostream>
using namespace std;
int main()
{
    int n = 10, m = 8;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i] = i;
            b[j] = j;
        }
    }
    return 0;
}