#include <iostream>
using namespace std;
int main()
{
    vector<int> v(4, 2); // 4 -> size, 2 -> initial capacitor
    // cout << v[0] << " ";
    // cout << v[1] << " ";
    // cout << v[2] << " ";
    // cout << v[3] << " ";
    vector<vector<int>> vx(3, vector<int>(4));    // created 3 rows & 4 column vector
    vector<vector<int>> vy(3, vector<int>(4, 2)); // created 3 rows & 4 column vector with  initial value 2
    cout<<vx.size();
    cout<<vy[1][1];
    cout<<vy[1][2];
}
