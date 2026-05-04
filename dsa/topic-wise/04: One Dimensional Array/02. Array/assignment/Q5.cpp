// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// taking input in array
void takeInput(vector<int> &v, int n)
{ // pass by reference
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}
// display elements
void displayElements(vector<int> &v)
{ // pass by reference
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> v;
    cout << "enter elements of array: ";
    takeInput(v, n);
    cout << "elements are: ";
    displayElements(v);
    bool flag = true;
    int evenIndicesSum = 0, oddIndicesSum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            v[i] = v[i] + 10;
        }
        else
        {
            v[i] = v[i] * 2;
        }
    }
    displayElements(v);
    return 0;
}