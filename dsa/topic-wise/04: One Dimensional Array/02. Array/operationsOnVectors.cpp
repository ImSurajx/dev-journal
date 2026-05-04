#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5); // 1, 1
    v.push_back(9); // 2, 2
    v.push_back(3); // 3, 4
    v.push_back(2); // 4, 4
    v.push_back(1); // 5, 8
    v.push_back(4); // 6, 8
    v.push_back(9); // 7, 8
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // pop_back() -> use to remove the last element from vector,
    // note size will reduce but capacity don't.
    v.pop_back();
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}