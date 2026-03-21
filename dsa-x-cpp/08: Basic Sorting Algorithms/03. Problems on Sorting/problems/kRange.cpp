// ques: given an array, arr[] containing 'n' integers, the task is to find an integer (say K) such that after replacing each and every index of the array by |a with base i - K| where (i belongs [1,n]), results in a sorted array. if no such integer exists that satisfies the above condition then return -1. find the range of k integer.
// [5,3,1] ->
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {5, 3, 10, 6};

    float kmin = INT_MIN;
    float kmax = INT_MAX;

    bool flag = true;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        float mid = (arr[i] + arr[i + 1]) / 2.0;

        if (arr[i] < arr[i + 1])
        {
            kmax = min(kmax, mid);
        }
        else
        {
            kmin = max(kmin, mid);
        }

        if (kmin > kmax)
        {
            flag = false;
            break;
        }
    }

    if (!flag)
    {
        cout << -1 << endl;
        return 0;
    }

    int low = ceil(kmin);
    int high = floor(kmax);

    if (low > high)
    {
        cout << -1 << endl;
    }
    else if (low == high)
    {
        cout << "Only one value of k: " << low;
    }
    else
    {
        cout << "Range of k: [" << low << ", " << high << "]";
    }
}