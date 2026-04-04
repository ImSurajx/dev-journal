// ques: find the upperbound of the target element.
#include <iostream>
using namespace std;
int getUpperBound(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = nums.size();
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // first element strictly greater than our target value.
        if (nums[mid] > target)
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
    vector<int> nums = {2, 4, 4, 6, 8, 10};
    int upperBound = getUpperBound(nums, 4);
    cout << "the upper bound of target value is: " << upperBound << endl;
    return 0;
}