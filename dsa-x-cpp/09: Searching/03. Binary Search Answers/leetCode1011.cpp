// ques: capacity to ship packages within D days.
// a conveyor belt has packages that must be shipped from one port to another within days days.
// the ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.
// return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
bool check(int capacity, vector<int> &weights, int days)
{
    int usedDays = 1;
    int load = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        if (load + weights[i] <= capacity)
        {
            load += weights[i];
        }
        else
        {
            usedDays++;
            load = weights[i];
        }
    }
    return usedDays <= days;
}
int shipWithinDays(vector<int> &weights, int days)
{
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(mid, weights, days))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    int minCapacity = shipWithinDays(weights, days);
    cout << "minimum capacity of ship is: " << minCapacity << endl;
    return 0;
}
