// ques: push zeros to the end while maintaining the relative of the other elements.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {5, 0, 1, 2, 0, 0, 4, 0, 3};
    cout << "array before sorting: " << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    // bubble sort
    int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        // traverse
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "array after sorting: " << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}