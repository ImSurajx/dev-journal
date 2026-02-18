// ques: given two string s and t, determine if they are isomorphic, leetcode 205
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isIsomorphic(string s, string t)
{
    vector<int> chars(150, 1000);
    if (s.size() == t.size())
    {
        // from s prespective
        for (int i = 0; i < s.size(); i++)
        {
            int idx = int(s[i]);
            if (chars[idx] == 1000)
            {
                chars[idx] = s[i] - t[i];
            }
            else if (chars[idx] != s[i] - t[i])
                return false;
        }
        // from t prespective
        for (int i = 0; i < 150; i++)
            chars[i] = 1000;
        for (int i = 0; i < t.size(); i++)
        {
            int idx = int(t[i]);
            if (chars[idx] == 1000)
            {
                chars[idx] = t[i] - s[i];
            }
            else if (chars[idx] != t[i] - s[i])
                return false;
        }
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "egg", t = "add";
    bool isIsomor = isIsomorphic(s, t);
    cout << isIsomor << endl;
    return 0;
}