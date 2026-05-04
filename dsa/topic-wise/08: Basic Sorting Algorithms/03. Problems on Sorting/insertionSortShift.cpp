// insertion sort shift method..
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {4, 3, 2, 1};
    for (int i = 1; i < v.size(); i++)
    {
        // key element which is equal to current element.
        int key = v[i];
        int j = i - 1; // j always start from previous adjacent element.
        // j must be greater than 0 so it's always itrating inside array, loop stop when it get out of bound.
        // we will check if previous element is greater than current key then move forward else break here element alreay positined correct.
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j]; // if previous element is greater than current then put previous element in current element
            j--;             // reduce j so we can move to next previous..
        }
        v[j + 1] = key; // place key at correct postion.
    }
    // printing array
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}