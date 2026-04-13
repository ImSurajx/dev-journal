// ques: you have a sorted array of infinit numbers, how would you search an element in the array.
#include <iostream>
using namespace std;
int binarySearch(vector<int> &nums, int target)
{
    // for infinite values we will pre-define a range of values.
    int low = 0, high = 1; // we will modify high or low in a way they ended up getting a values in b/w our target values exist
    while (nums[high] < target && high < nums.size())
    {
        low = high;
        high *= 2;
    }

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> nums = {0,1,2,3,4,5,6,7,8,9};
    int getTarget = binarySearch(nums, 1);
    cout << "target found at the index: " << getTarget << endl;
    return 0;
}