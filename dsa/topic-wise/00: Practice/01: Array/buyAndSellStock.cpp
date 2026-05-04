// 121. Best Time to Buy and Sell Stock
#include <iostream>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int minimum = prices[0];
    int profit = 0;
    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        profit = prices[i] - minimum;
        maxProfit = max(maxProfit, profit);
        minimum = min(minimum, prices[i]);
    }
    return maxProfit;
}
int main()
{
    vector<int> v = {7, 1, 5, 3, 6, 4};
    int profit = maxProfit(v);
    cout << "maximum profit is: " << profit << endl;
    return 0;
}