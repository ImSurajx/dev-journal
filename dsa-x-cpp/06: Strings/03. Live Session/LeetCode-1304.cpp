#include <iostream>
using namespace std;
vector<int> sumZero(int n)
{
    vector<int> v(n, 0);
    if (n % 2 != 0)
        n--;
    for (int i = 0; i < n; i += 2)
    {
        v[i] = i + 1;
        v[i + 1] = (-1 * (i + 1));
    }
    return v;
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    vector<int> v = sumZero(n);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}