#include <iostream>
#include <vector>
using namespace std;
// take input
void input(vector<int> &nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
}
// display array
void display(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

// trapping rain water algorithm
// previous greatest element -> array of previous greatest element.
// next greatest element -> array of next greatest element.
// create a array which contain min(pre, next);
// compare height with this new array & calculate new arry - height add them into sum.

int trap(vector<int> &height)
{
    int n = height.size();
    // find previous greatest array
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
            max = height[i];
    }
    // find next greatest array
    int next[n];
    next[n - 1] = -1;
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        next[i] = max;
        if (max < height[i])
            max = height[i];
    }
    // minimum array of prev or next
    int mini[n];
    for (int i = 0; i < n; i++)
    {
        mini[i] = min(prev[i], next[i]);
    }
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        if (height[i] < mini[i])
        {
            water += (mini[i] - height[i]);
        }
    }
    return water;
}

int trapOptimise(vector<int> &height)
{
    int n = height.size();
    // find previous greatest array
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
            max = height[i];
    }
    // find next greatest array -> prev array
    prev[n - 1] = -1;
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (max < prev[i])
            prev[i] = max;
        if (max < height[i])
            max = height[i];
    }
    // minimum array of prev or next
    // int mini[n];
    // for(int i = 0; i < n; i++){
    //     mini[i] = min(prev[i], next[i]);
    // }

    // minimum array -> prev array
    // for(int i = 0; i < n; i++){
    //     prev[i] = min(prev[i], next[i]);
    // }
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        if (height[i] < prev[i])
        {
            water += (prev[i] - height[i]);
        }
    }
    return water;
}

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> v;
    cout << "enter elements of array: ";
    input(v, n);
    cout << " trap water is: " << trap(v) << endl;
    return 0;
}
