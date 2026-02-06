// find the first non-repeating element in the array .
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 2, 2, 3, 2, 4, 6, 5, 5};
    for (int i = 0; i < 9; i++)
    {
        int count = 0;
        for (int j = 0; j < 9; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1)
        {
            cout << "first non-repeating element in the array is: " << arr[i] << endl;
            break;
        }
    }
    return 0;
}