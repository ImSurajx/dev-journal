/*
ques: given an array of strings arr[] with all strings in lowercase. sort given strings using Bubble Sort
and display the sorted array.
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
void bubbleSort(vector<string> &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        bool isSwap = false;
        for (int j = 0; j < str.size() - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                swap(str[j], str[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            break;
        }
    }
}
int main()
{
    vector<string> str = {"tree", "graph", "stack", "queue", "array", "hash"};
    bubbleSort(str);
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    return 0;
}
