#include <iostream>
#include <vector>
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

// swap elements of array
void swapElements(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// reverse part of array
void reversePart(vector<int> &arr, int i, int j)
{
    while (i <= j)
    {
        swapElements(arr[i], arr[j]);
        i++;
        j--;
    }
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
    int k;
    cout << "enter k: ";
    cin >> k;
    if (k > v.size())
    {
        k = k % v.size();
    }
    cout << "reversed array is: ";
    reversePart(v, 0, (v.size() - k - 1)); // reverse from 0 to v.size()-k-1
    reversePart(v, v.size() - k, v.size() - 1);   // reverse from v.size()-k to v.size()-1
    reversePart(v, 0, v.size() - 1);       // reverse from 0 to v.size()-1;
    displayElements(v);
    return 0;
}