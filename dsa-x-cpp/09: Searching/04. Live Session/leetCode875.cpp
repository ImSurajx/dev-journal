#include <iostream>
#include <vector>
#include <numbers>
using namespace std;

int checkPiles(vector<int> &piles, int mid)
{
    int totalHours = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        totalHours += (piles[i] + mid - 1) / mid;
    }
    return totalHours;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int totalHours = checkPiles(piles, mid);
        if (totalHours <= h)
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
    vector<int> plies = {3, 6, 7, 11};
    int h = 8;
    int value = minEatingSpeed(plies, h);
    cout << "minimum banana eaten by koko in each hour is: " << value << endl;
}