// ques: given an array of strings. Check whether they are anagram or not.
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
        if(s==t) cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
    return 0;
}