// ques: given an array, find if it is sorted or not.
#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    bool flag = true;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    int arr[] = {5, 2, 3, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int flag = isSorted(arr, size);
    if (flag)
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "array is not sorted" << endl;
    }
    int sortArray[] = {1, 2, 3, 4, 5};
    size = sizeof(sortArray) / sizeof(sortArray[0]);
    flag = isSorted(sortArray, size);
    if (flag)
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "array is not sorted" << endl;
    }
    return 0;
}