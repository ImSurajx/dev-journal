// ques: given a sorted array of n elemenets and a target x, fint the first occurrence of x in the array. if x does not exist return -1.
#include <iostream>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 8, 9};
    int x = 4;
    int lo = 0;
    int hi = v.size() - 1;
    while (lo <= hi)
    {
        int mi = (lo + hi) / 2;
        if (v[mi] == x)
        {
            if (v[mi - 1] != x)
            {
                cout << "it's last occurance of the element: " << mi << endl;
                break;
            }
            else
            {
                hi = mi - 1;
            }
        }
        else if (v[mi] > x)
            hi = mi - 1;
        else if (v[mi] < x)
            lo = mi + 1;
    }
    return -1;
}