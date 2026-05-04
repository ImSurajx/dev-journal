// ques: given an array of size n + 1 consisiting of integers from 1 to n. on eof the element is duplicate in the array that duplicate element.
#include <iostream>
using namespace std;
int main()
{
    vector<int> arr = {6, 3, 2, 4, 1, 7, 1, 5};
    vector<int> nums(8, 0);
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (nums[arr[i]] == 0)
        {
            nums[arr[i]] = 1;
        }
        else
        {
            // observation
            // - time efficient
            // - space consuming
            cout << arr[i] << " : " << i << endl;
            break;
        }
    }
    return 0;
}