// ques: find the last occurrence of x in the array
#include <iostream>
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
    cout << "enter value of x: ";
    cin >> x;
    int i = v.size() - 1;
    bool flag = false;
    while (i >= 0)
    {
        if (v[i] == x)
        {
            cout << "the last occurrenc of x at: " << i << " index." << endl;
            flag = true;
            break;
        }
        i--;
    }
    if (!flag)
    {
        cout << "x is not prensent in array." << endl;
    }
    return 0;
}