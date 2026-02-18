// ques: given two strings s and t, return true, if t is an anagram of s, and false otherwise, leetcode:242
#include <iostream>
using namespace std;
int main()
{
    string s, t;
    cout << "enter first string: ";
    getline(cin, s);
    cout << "enter second string: ";
    getline(cin, t);
    if (s.size() == t.size())
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t) cout<<"true";
        else cout<<"false";
        // bool isAnagram = true;
        // int i = 0;
        // while (i < '\0')
        // {
        //     if (s[i] != t[i])
        //     {
        //         isAnagram = false;
        //         cout << "string is not a anagram" << endl;
        //     }
        //     i++;
        // }
        // if (isAnagram)
        // {
        //     cout << "string is a anagram." << endl;
        // }
    }
    // else
    // {
    //     cout << "string is not a anagram." << endl;
    // }
    return 0;
}