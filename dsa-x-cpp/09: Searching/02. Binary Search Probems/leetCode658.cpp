/*
ques: fint k closest element.
case1: if element present.
case2: if element is not present.
case3: if x is not present & upperbound become out of bound
case4: if x is present & one of them become out of bound, then check for three more.
case5: if elment is <= nums[0] & it is >= nums[n-1]
case6: if x > nums[n-1]
*/
#include <iostream>
using namespace std;
vector<int> getClosestElement(vector<int> &nums, int target, int total)
{
    int low = 0;
    int high = nums.size() - 1;
    bool flag = false;
    int count = 0;
    int index = -1;
    vector<int> closest;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            flag = true;
            closest.push_back(nums[mid]);
            index = mid;
            count++;
            break;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (flag)
    {
        int i = index - 1;
        int j = index + 1;
        while (count < total)
        {
            int first;
            int second;
            if (i < 0)
            {
                closest.push_back(nums[j]);
                j++;
            }
            else if (j > nums.size() - 1)
            {
                closest.push_back(nums[i]);
                i--;
            }
            else if (i >= 0 && j < nums.size())
            {
                first = abs(nums[i] - nums[index]);
                second = abs(nums[j] - nums[index]);
                // if (first < 0)
                //     first *= -1;
                // else if (second < 0)
                //     second *= -1;
                if (first < second || first == second)
                {
                    closest.push_back(nums[i]);
                    i--;
                }
                else
                {
                    closest.push_back(nums[j]);
                    j++;
                }
            }
            count++;
        }
    }
    else
    {
        int i = high;
        int j = low;
        while (count < total)
        {
            int first;
            int second;
            if (i < 0)
            {
                closest.push_back(nums[j]);
                j++;
            }
            else if (j > nums.size() - 1)
            {
                closest.push_back(nums[i]);
                i--;
            }
            else if (i >= 0 && j < nums.size())
            {
                first = abs(nums[i] - target);
                second = abs(nums[j] - target);
                // if (first < 0)
                //     first *= -1;
                // else if (second < 0)
                //     second *= -1;
                if (first < second || first == second)
                {
                    closest.push_back(nums[i]);
                    i--;
                }
                else
                {
                    closest.push_back(nums[j]);
                    j++;
                }
            }
            count++;
        }
    }
    sort(closest.begin(), closest.end());
    return closest;
}

// anothe approach using binary search on window -> far better way using log n
vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int low = 0;
    int high = arr.size() - k;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        // get a window compare the value which give diff result like edge of first window with second window.
        if (x - arr[mid] > arr[mid + k] - x)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    // return that vector
    return vector<int>(arr.begin() + low, arr.begin() + low + k);
}
int main()
{
    vector<int> nums = {1, 2, 3, 5, 6, 7};
    int x = 4;
    int k = 4;
    vector<int> closest = findClosestElements(nums, x, k);
    for (int i = 0; i < closest.size(); i++)
        cout << closest[i] << ", ";
    return 0;
}
