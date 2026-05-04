// Selection Sort Algorithm:
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {5, 3, 1, 4, 2, -4};
    cout << "array before sorting: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v.size() - 1; i++)
    {
        int idx = -1;
        int min = INT_MAX;
        for (int j = i; j < v.size(); j++)
        {
            if (v[j] < min)
            {
                min = v[j];
                idx = j;
            }
        }
        cout << "min element is: " << min << endl;
        swap(v[i], v[idx]);
    }
    cout << "array after sorting: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}