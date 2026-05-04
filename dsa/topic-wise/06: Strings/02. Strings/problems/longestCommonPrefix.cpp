// ques: input n strings and wap to find the longest common prefix string of all the strings
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    sort(strs.begin(), strs.end());
    // algorithm: first sort then compare first with last
    string first = strs[0];
    string last = strs[strs.size() - 1];
    int minimum = min(first.size(), last.size());
    string prefix = "";
    for (int i = 0; i < minimum; i++)
    {
        if (first[i] != last[i])
        {
            return prefix;
        }
        else
        {
            prefix += first[i];
        }
    }
    return prefix;
}
int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    string s = longestCommonPrefix(strs);
    cout << s << endl;
    return 0;
}