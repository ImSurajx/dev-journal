// ques: given a string consisting of lowercase, english alphabet, print the character that is occurring most number of times.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str;
    cout << "enter a string: ";
    getline(cin, str);
    // int max = 0;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     char ch = str[i];
    //     int count = 1;
    //     for (int j = i + 1; j < str.length(); j++)
    //     {
    //         if (str[i] == str[j])
    //             count++;
    //     }
    //     if (max < count)
    //         max = count;
    // }
    // for (int i = 0; i < str.length(); i++)
    // {
    //     char ch = str[i];
    //     int count = 1;
    //     for (int j = i + 1; j < str.length(); j++)
    //     {
    //         if (str[i] == str[j])
    //             count++;
    //     }
    //     if (count == max){
    //         cout<<ch<<" "<<max<<endl;
    //     }
    // }

    // frequency array: extra space.. (optimize way)
    vector<int> v(26, 0);
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int ascii = int(ch);
        v[ascii - 97]++;
    }
    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] > max)
            max = v[i];
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == max)
        {
            int ascii = i + 97;
            char ch = char(ascii);
            cout << ch << " : " << max<<endl;
        }
    }
    return 0;
}