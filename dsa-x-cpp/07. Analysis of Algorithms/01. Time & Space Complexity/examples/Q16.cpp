// ques: calculate the time and space complexity for the below nested loop code snippet
// space complexity -> O(n*n/2) -> (n^2/2) -> O(n^2)
// time complexity -> O(n/2 log n) -> O(n log n);
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int a[n][n / 2];
    for (int i = 1; i < n; i *= 2)
    {
        for (int j = 0; j < n / 2; j++)
        {
            a[i][j]++;
        }
    }
}