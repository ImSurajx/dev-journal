// ques: input a string and concatenate with its reverse string and print it
#include <iostream>
using namespace std;
int main()
{
    string str = "suraj";
    string temp = str;
    reverse(temp.begin(), temp.end());
    str += temp;
    cout << str;
    return 0;
}