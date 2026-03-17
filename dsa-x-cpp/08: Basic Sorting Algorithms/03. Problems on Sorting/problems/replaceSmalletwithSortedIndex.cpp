// ques: given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1. the order of elements is the same, i.e. is placed in the place of the smallest element, 1 is placed for the second smallest elements, ...N-1 is placed for the largest element
// ex: {19,12,23,8,16} -> {3,1,4,0,2}
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {19, 12, 23, 8, 16};
    // m1: only work for positive integers, we use negative marking, without hashmap
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        int min = INT_MAX;
        int idx = -1;
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] > 0)
            {
                if (arr[j] < min)
                {
                    min = arr[j];
                    idx = j;
                }
            }
        }
        arr[idx] = count--;
    }

    for (int i = 0; i < 5; i++)
        arr[i] *= (-1);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;

    // mentor method...
    vector<int> v(5, 0); // 0 mean not visited
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        int min = INT_MAX;
        int midx = -1;
        for (int j = 0; j < 5; j++)
        {
            if (v[j] == 1)
                continue;
            else
            {
                if (min > arr[j])
                {
                    min = arr[j];
                    midx = j;
                }
            }
        }
        arr[midx] = x++;
        v[midx] = 1;
    }
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}