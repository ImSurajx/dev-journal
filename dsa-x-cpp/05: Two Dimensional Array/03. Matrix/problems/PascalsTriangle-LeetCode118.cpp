// ques: given an integer 'numRows' genrate pascal triangle.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin>>n;
    vector<vector<int>> v;
    // pushing vector into 2D vector
    for (int i = 1; i <= n; i++)
    {
        vector<int> x(i);
        v.push_back(x);
    }
    // genrate
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }
    // printing pascal triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}