// ques: find the minimum operations required to sort the array in increasing order, in one operation, you can set each of one element to 0..
#include <iostream>
using namespace std;
int main()
{
    vector<int> arr = {1, 3, 2, 3, 4};
    cout << "array is: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    int operations = 0;
    // only use to run loop n times
    for (int j = arr.size() - 1; j > 0; j--)
    {
        if (arr[j] < arr[j - 1])
        {
            arr[j - 1] = 0;
            ++operations;
        }
    }
    cout << "array after sorting: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "total number of operations performed: " << operations << endl;
    return 0;
}