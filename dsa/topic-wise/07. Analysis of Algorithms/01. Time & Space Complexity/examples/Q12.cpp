// ques: calculate the space complexity for the below nested loop code snippet
// space complexity : O(nxm);
// time complexity : O(nxm);
#include <iostream>
using namespace std;
int main()
{
    vector<int> a;
    vector<int> b;
    int n = 10, m = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a.push_back(i);
            b.push_back(j);
        }
    }
    return 0;
}