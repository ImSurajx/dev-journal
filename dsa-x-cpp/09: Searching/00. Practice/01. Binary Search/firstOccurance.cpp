// find the first occurance of an element in array.
#include <iostream>
using namespace std;
int firstOccurrence(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (nums[mid] >= target)
        {
            high = mid - 1;
        
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 4, 4, 6, 8, 10};
    int firstOccur = firstOccurrence(nums, 4);
    cout << "the target value is: " << firstOccur << endl;
    return 0;
}