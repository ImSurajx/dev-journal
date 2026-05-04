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

// method 1: two pass method..
void twoPassMethod(vector<int> &v)
{
    int noz = 0, noo = 0, notwo = 0;
    // count zeros & ones
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            noz++;
        }
        else if (v[i] == 1)
        {
            noo++;
        }
        else if (v[i] == 2)
        {
            notwo++;
        }
    }
    // filling elements
    for (int i = 0; i < v.size(); i++)
    {
        if (i < noz)
        {
            v[i] = 0;
        }
        else if (i < (noo + noz))
        {
            v[i] = 1;
        }
        else
        {
            v[i] = 2;
        }
    }
}

// method 2: three pointers
void threePointer(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 2)
        {
            swapElements(nums[mid], nums[high]);
            high--;
        }
        else if (nums[mid] == 0)
        {
            swapElements(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
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
    threePointer(v);
    cout << "sorted array is: ";
    displayElements(v);
    return 0;
}