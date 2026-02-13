// ques: Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
#include <iostream>
using namespace std;
vector<int> getRow(int rowIndex)
{
    vector<int> v;
    for (int i = 0; i <= rowIndex; i++)
    {
        v.push_back(1);
        for (int j = v.size()-2; j >= 1; j--)
        {
            v[j] = v[j] + v[j - 1];
        }
    }
    return v;
}
int main()
{
    vector<int> v = getRow(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
