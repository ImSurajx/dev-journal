// WAP to find the largest three elements in the array.
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
    if (n < 3)
    {
        cout << "no max exist" << endl;
        return 0;
    }
    vector<int> v;
    cout << "enter elements of array: ";
    takeInput(v, n);
    cout << "elements are: ";
    displayElements(v);
    int max = INT_MIN, smax = INT_MIN, tmax = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            tmax = smax;
            smax = max;
            max = v[i];
        }
        else if (v[i] < max && v[i] > smax)
        {
            tmax = smax;
            smax = v[i];
        }
        else if (v[i] < smax && v[i] > tmax)
        {
            tmax = v[i];
        }
    }
    cout << "max is: " << max << endl;
    cout << "second max is: " << smax << endl;
    cout << "third max is: " << tmax << endl;
    return 0;
}