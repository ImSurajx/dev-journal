#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 15, 16};
    int target = 0;
    int high = nums.size() - 1, low = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            cout << mid << endl;
            break;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
    }
    cout << -1 << endl;
    return 0;
}