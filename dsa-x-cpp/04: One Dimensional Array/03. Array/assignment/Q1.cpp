// count the number of triplets whose sum is equal to the given value x.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "enter the value: ";
    int x;
    cin >> x;
    cout << "triplets are: " << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    cout << "(" << i << ", " << j << ", " << k << ")" << endl;
                }
            }
        }
    }
    return 0;
}