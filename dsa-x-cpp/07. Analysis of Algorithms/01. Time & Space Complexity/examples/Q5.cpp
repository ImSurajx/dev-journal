// ques: calculate the t.c for this given code
// soln -> number of iteration is 1+2+3+4.....n
// so t.c -> n(n+1)/2 -> n2/2 + n/2 -> n2/2 -> n2 (we avoid smaller power choose the large one as ealier).
// so t.c -> O(n^2)
 #include <iostream>
using namespace std;
int main()
{
    int n = 7;
    vector<int> arrn(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << arrn[i] << " ";
        }
    }
    cout << endl;
    return 0;
}