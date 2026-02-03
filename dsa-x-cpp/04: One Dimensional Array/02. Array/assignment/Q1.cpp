// Count the number of elements strictly greater than x.
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
    int x;
    cout << "enter element: ";
    cin >> x;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
            count++;
    }
    cout << "total no of element which is greater than x is: " << count << endl;
    return 0;
}