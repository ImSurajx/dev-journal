// ques: given n strings consisting of digits from 0 to 9 the index of string which has maximum value. take 0 based index.
#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    vector<string> nums = {"0123", "0023", "456", "00812", "940", "2901"};
    int max = INT_MIN;
    int idx = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (stoi(nums[i]) > max)
        {
            max = stoi(nums[i]);
            idx = i;
        }
    }
    cout << "maximum value is present at: " << idx << ", which is: " << max << endl;
    return 0;
}