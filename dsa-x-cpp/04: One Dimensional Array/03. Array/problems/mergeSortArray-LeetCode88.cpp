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
        nums[i] = x;
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

// three pointers: using seprate arrray
vector<int> merge(vector<int> &v1, vector<int> &v2)
{
    int n = v1.size();
    int m = v2.size();
    vector<int> v(m + n);
    int i = 0; // v1
    int j = 0; // v2
    int k = 0; // res
    while (i < n && j < m)
    {
        if (v1[i] < v2[j])
        {
            v[k] = v1[i];
            i++;
        }
        else
        {
            v[k] = v2[j];
            j++;
        }
        k++;
    }
    // for remaining elements
    if (i == n)
    {
        while (j < m)
        {
            v[k++] = v2[j++];
        }
    }
    if (j == m)
    {
        while (i < n)
        {
            v[k++] = v1[i++];
        }
    }
    return v;
}

// three pointers: using exisiting array
void mergesort(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = (m + n) - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }

    while (j >= 0)
    {
        nums1[k] = nums2[j];
        k--;
        j--;
    }

    // while (i >= 0)
    // {
    //     nums1[k] = nums1[i];
    //     k--;
    //     i--;
    // }
}
int main()
{
    int m;
    cout << "enter size of first array: ";
    cin >> m;
    int n;
    cout << "enter size of second array: ";
    cin >> n;
    vector<int> v1(m + n);
    cout << "enter element of first array: ";
    input(v1, m);
    vector<int> v2(n);
    cout << "enter element of second array: ";
    input(v2, n);
    cout << "merge array is: ";
    mergesort(v1, m, v2, n);
    display(v1);
    return 0;
}