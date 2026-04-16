#include <iostream>
using namespace std;
int findKthPositive(vector<int> &arr, int k)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size();
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] - (mid + 1) >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans + k;
}
int main()
{
    vector<int> nums = {2, 3, 4, 7, 11};
    int k = 5;
    int findKth = findKthPositive(nums, 5);
    cout << "missing kth element is: " << findKth << endl;
    return 0;
}