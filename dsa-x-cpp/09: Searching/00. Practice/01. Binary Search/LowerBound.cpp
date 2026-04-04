// ques: find the lowerbound of the target element
#include <iostream>
using namespace std;
int LowerBound(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // firsst element which >= target value.
        if (nums[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else // nums[mid] < target;
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 4, 6, 8, 10};
    int getLowerBound = LowerBound(nums, 2);
    cout << "the lower bound of target value is: " << getLowerBound << endl;
    return 0;
}