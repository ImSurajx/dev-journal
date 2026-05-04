// Insertion Sort Algorithm:
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {5, 3, 1, 4, 2};
    cout << "array before sorting: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < v.size(); i++)
    {
        int j = i;
        // while(j>0 && v[j] < v[j-1])
        while (j > 0)
        {
            if (v[j] <= v[j - 1])
            {
                swap(v[j], v[j - 1]);
                j--;
            }
            else
            {
                break;
            }
        }
    }
    cout << "array after sorting: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}