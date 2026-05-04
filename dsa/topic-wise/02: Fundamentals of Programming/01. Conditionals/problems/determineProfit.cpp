// ques: if cost price and selling price of an item is input through the keyboard, wap to determine the seller has made profit or incurred loss. also determine how much profit he made or loss he incurred.
#include <iostream>
using namespace std;
int main()
{
    int costPrice, sellingPrice, loss, profit;
    cout << "enter cost price of product: ";
    cin >> costPrice;
    cout << "enter selling price of product: ";
    cin >> sellingPrice;
    if (costPrice > sellingPrice)
    {
        loss = sellingPrice - costPrice;
        cout << "seller made loss of: " << loss << endl;
    }
    else if (costPrice == sellingPrice)
    {
        cout << "seller made no profit or no loss on this product." << endl;
    }
    else
    {
        profit = sellingPrice - costPrice;
        cout << "seller made profit of: " << profit << endl;
    }
    return 0;
}