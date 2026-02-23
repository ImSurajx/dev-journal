// ques: given an array of size n + 1 consisiting of integers from 1 to n. on eof the element is duplicate in the array that duplicate element.
#include <iostream>
using namespace std;
int main()
{
    vector<int> arr = {6, 3, 2, 4, 1, 7, 1, 5};
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // sum of n + 1 terms
        sum += arr[i];
    }
    // sum of n terms (n*(n+1)/2)
    int nsum = ((arr.size() - 1) * ((arr.size() - 1) + 1)) / 2;
    cout << "duplicate element is: " << sum - nsum << endl;
    return 0;
}