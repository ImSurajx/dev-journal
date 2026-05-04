/*
Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
two numbers formed from digits of the array. Please note that all digits of the given array must be
used to form the two numbers.
*/
#include <iostream>
using namespace std;
void insertionSort(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int j = i;
        while (j > 0 && v[j] < v[j - 1])
        {
            swap(v[j], v[j - 1]);
            j--;
        }
    }
}
int main()
{
    vector<int> v = {0, 0, 9, 8, 7, 6};
    insertionSort(v);
    int num1 = 0, num2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            num1 *= 10;
            num1 += v[i];
        }
        else
        {
            num2 *= 10;
            num2 += v[i];
        }
    }
    cout << "nums are: " << num1 << " " << num2 << endl;
    cout << "sum is: " << num1 + num2 << endl;
    return 0;
}