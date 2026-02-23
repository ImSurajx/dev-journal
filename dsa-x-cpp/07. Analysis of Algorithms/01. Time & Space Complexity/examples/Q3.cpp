// ques: calculate the time complexity for traversing 2 arrays of size m and n;
// soln: O(m+n) -> m & n both are varible & we don't have much knowledge of them.
#include <iostream>
using namespace std;
int main()
{
    int m = 9, n = 7;
    vector<int> arrm(m, 0);
    vector<int> arrn(n, 0);
    for (int i = 0; i < m; i++)
    {
        cout << arrm[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arrn[i] << " ";
    }
    cout << endl;
    return 0;
}