// ques: given a sentence ‘str’, return the word that is lexicographically maximum.
#include <iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s = "decode dsa with pw";
    vector<string>str;
    stringstream words(s);
    string temp;
    while(words>>temp){
        str.push_back(temp);
    }
    for(int i = 0; i < str.size(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    sort(str.begin(), str.end());
    for(int i = 0; i < str.size(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str[str.size()-1]<<endl;
    return 0;
}