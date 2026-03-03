// ques: sort a string in decreasing order of values associated after removal of the values smaller than x.
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    string str = "AZYZXBDJKX";
    string newStr;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'X')
        {
            newStr.push_back(str[i]);
        }
    }
    cout << newStr << endl;
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = 0; j < str.length() - 1 - i; j++)
        {
            bool isSwap = false;
            if (newStr[j] > newStr[j + 1])
            {
                swap(newStr[j], newStr[j+1]);
                isSwap = true;
            }
            if (!isSwap)
            {
                break;
            }
        }
    }
    // sort(newStr.begin(), newStr.end());
    cout << newStr << endl;
    return 0;
}