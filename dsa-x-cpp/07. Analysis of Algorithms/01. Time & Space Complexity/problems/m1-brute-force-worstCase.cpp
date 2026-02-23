// ques: given an array of size n + 1 consisiting of integers from 1 to n. on eof the element is duplicate in the array that duplicate element.
#include <iostream>
using namespace std;
int main()
{
    vector<int> arr = {6, 3, 2, 4, 1, 7, 1, 5}; 
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j]){
                count++;
                break;
            }
        }
        if (count == 2)
        {
            // total number of operations is 24
            cout << arr[i] << " : " << i << endl;
            break;
        }
    }
    return 0;
}