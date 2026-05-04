// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
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
        int count = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "unique element is: " << v[i] << endl;
            return 0;
        }
    }
    cout << "no unique element found." << endl;
    return 0;
}