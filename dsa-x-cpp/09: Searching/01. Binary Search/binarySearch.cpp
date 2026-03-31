/*
What & why?
linear search: if search space size is n, we are travling almost n times which is equal to O(n)
number of operations: maximum n.

- Binary Search: works only if array is sorted both accending or decending..
- here tc. is log n < O(n), n log n
- mostly work on array indices..
- maintain two pointer one is low & one is high
    - low = 0, high = n - 1 & mid = (low + high) / 2
    - if arr[mid] == target return true
    - else if(arr[mid]<target) update low to current mid + 1 (reduction in search space)
    - else if(arr[min]>target) high = mid - 1;
- number of operations:

Time Complexity:
- total number of elements = n
- total number of operations = x
- n -> n/2 -> n/4 -> n/8 -> n/16 -> n/32........... -> x terms
- n -> n/2^1 -> n/2^2 -> n/2^3 -> n/2^4 -> n/2^5...... -> n/2^x = 1
- n/2^x = 1 -> 2 ^ x = n, x = log n with base 2

*/
#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else if (nums[mid] > target)
            high = mid - 1;
        else
            return -1;
    }
    return -1;
}
int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int targetIdx = BinarySearch(nums, 9);
    cout << targetIdx << endl;
    return 0;
}
