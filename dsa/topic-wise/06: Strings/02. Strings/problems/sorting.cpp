#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // lexgogaphical order -> ascii values order
    string str;
    cout<<"enter string: ";
    getline(cin, str);
    sort(str.begin(), str.end());
    cout<<str;
    return 0;
}