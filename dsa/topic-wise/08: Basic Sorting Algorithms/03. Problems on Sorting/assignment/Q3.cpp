// ques: given an integer array and an integer k where k <= size of array, we need to return the kth smallest element of the array
#include <iostream>
using namespace std;
void bubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
            break;
    }
}
int main()
{
    vector<int> arr = {7, 2, 10, 4, 3};
    int k = 3;
    bubbleSort(arr);
    cout << "array is: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "smallest kth element is: " << arr[k - 1] << endl;
    return 0;
}