// ques: peak index in mountain array.
#include <iostream>
using namespace std;
int peakIndex(vector<int> &nums)
{
    long long low = 1;
    long long high = nums.size() - 2;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (nums[mid] > nums[mid + 1])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 3, 5, 4, 3, 2, 0};
    int idx = peakIndex(nums);
    cout << "peak of mountain is: " << idx << endl;
    return 0;
}