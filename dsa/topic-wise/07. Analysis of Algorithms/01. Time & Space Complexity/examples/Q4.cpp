// ques: calculate the time complexity of this given code.
// soln: t.c. here is O(nxn) -> O(n^2)
#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    vector<int> arrn(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arrn[i] << " ";
        }
    }
    cout << endl;
    return 0;
}