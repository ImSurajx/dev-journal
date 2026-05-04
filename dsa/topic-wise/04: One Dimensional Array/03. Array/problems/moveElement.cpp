// ques: move all negative numbers to beginning and positive to end with constant extra space.
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

// method 2: two pointers
void twoPointer(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if(v[j]==0){
            j--;
        }
        else if (v[i] < 0)
        {
            i++;
        }
        else if (v[j] > 0)
        {
            j--;
        }
        else if (v[i] > 0 && v[j] < 0)
        {
            swapElements(v[i], v[j]);
            i++;
            j--;
        }
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
    // twoPassMethod(v);
    twoPointer(v);
    cout << "sorted array is: ";
    displayElements(v);
    return 0;
}