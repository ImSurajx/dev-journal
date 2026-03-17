// leetcode: 455
#include <iostream>
using namespace std;
int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    // int gsize = g.size();
    // int ssize = s.size();
    int count = 0;
    // for (int i = 0; i < min(ssize, gsize); i++) {
    //     if (g[i] <= s[i])
    //         count++;
    // }
    int i = 0, j = 0;
    while (i < g.size() && j < s.size())
    {
        if (s[j] >= g[i])
        {
            count++;
            i++;
            j++;
        }
        else
            j++;
    }
    return count;
}
int main()
{
    vector<int> g = {10, 9, 8, 7};
    vector<int> s = {5, 6, 7, 8};
    int max = findContentChildren(g, s);
    cout << "Output: " << max << endl;
}