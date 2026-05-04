#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {5, 1, 2, 3, 4};
    int count = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "array before bubble sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size - 1; i++)
    {
        bool isSwaped = false;
        // traverse
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwaped = true;
            }
        }
        if (!isSwaped)
        {
            break;
        }
        cout << count++ << " instance" << endl;
    }
    cout << endl;
    cout << "array after bubble sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}