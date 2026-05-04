// ques: input a string return the number of substring that contains only vowels
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string str = "hgdhpw";
    vector<string> sub;
    // int count = 0;
    // for (int i = 0; i <= str.size() - 1; i++)
    // {
    //     for (int j = i + 1; j < str.size(); j++)
    //     {
    //         sub.push_back(str.substr(i, j));
    //     }
    // }
    // for (int i = 0; i < sub.size(); i++)
    // {
    //     bool isContain = false;
    //     for (int j = 0; j < sub[i].size(); j++)
    //     {
    //         if (sub[i][j] == 'a' && sub[i][j] == 'i' && sub[i][j] == 'e' && sub[i][j] == 'o' && sub[i][j] == 'u')
    //         {
    //             isContain = true;
    //         }
    //     }
    //     if (isContain)
    //     {
    //         count++;
    //     }
    // }
    // for (int i = 0; i < sub.size(); i++)
    // {
    //     cout << sub[i] << " ";
    // }
    // cout << endl;
    int total = 0, streak = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u')
        {
            streak++;
        }
        else
        {
            streak = 0;
        }
        total += streak;
    }
    cout << "total number of substring which contain vowels: " << total << endl;
    return 0;
}