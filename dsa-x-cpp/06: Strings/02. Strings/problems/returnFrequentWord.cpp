// ques: given a sentence 'str', return the word that is occurring most number of times in that sentence..
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str = "suraj is a 21 year old grown man he is a software developer is";
    stringstream strWords(str);
    string temp;
    vector<string> words;
    while (strWords >> temp)
    {
        words.push_back(temp);
    }
    // worst code
    // int max = 0;
    // int idx = -1;
    // for (int i = 0; i < words.size() - 1; i++)
    // {
    //     int count = 0;
    //     for(int j = i + 1; j < words.size(); j++){
    //         if(words[i] == words[j]) count++;
    //     }
    //     if(max < count){
    //         max = count;
    //         idx = i;
    //     }
    // }
    // cout<<"most repeated word is: "<<words[idx]<<endl;

    // another way:
    // for (int i = 0; i < words.size(); i++)
    // {
    //     cout << words[i] << " ";
    // }
    // cout << endl;
    sort(words.begin(), words.end());
    int max = 0;
    int count = 1;
    for (int i = 1; i < words.size(); i++)
    {
        if (words[i] == words[i - 1])
        {
            count++;
        }
        else
            count = 1;
        if (count > max)
        {
            max = count;
        }
    }
    count = 1;
    for (int i = 1; i < words.size(); i++)
    {
        if (words[i] == words[i - 1])
        {
            count++;
        }
        else
            count = 1;
        if (max == count)
        {
            cout << words[i] << " : " << max << endl;
        }
    }
    return 0;
}