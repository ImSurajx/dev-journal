// ques: wap to reverse the content of one array without using any extra array.
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
    int i = 0, j = v.size() - 1;
    while (i <= j)
    {
        swapElements(v[i], v[j]);
        i++;
        j--;
    }
    // using four loop -> two variables in four loop.
    // for (int i = 1, j = v.size() - 1; i <= j; i++, j--)
    // {
    //     swapElements(v[i], v[j]);
    // }
    cout << "reversed array is: ";
    displayElements(v);
    return 0;
}