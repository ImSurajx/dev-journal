// ques: find the minimum operations required to sort the array in increasing order, in one operation, you can set each occurrence of one element to 0..
// #include <iostream>
// using namespace std;
// int main()
// {
//     vector<int> arr =  {3, 1, 3, 2};
//     cout << "array is: ";
//     for (int i = 0; i < arr.size(); i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     int operations = 0;
//     // only use to run loop n times
//     for (int i = arr.size() - 1; i > 0; i--)
//     {
//         if (arr[i] < arr[i - 1])
//         {
//             for (int j = 0; j < i; j++)
//             {
//                 if (arr[j] == arr[i - 1])
//                 {
//                     arr[j] = 0;
//                 }
//             }
//             ++operations;
//         }
       
//     }
//     cout << "array after sorting: ";
//     for (int i = 0; i < arr.size(); i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     cout << "total number of operations performed: " << operations << endl;
//     return 0;
// }

// gpt version
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<int> arr = {4, 2, 4, 3, 1};

    cout << "array is: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    int n = arr.size();

    // Step 1: find start of non-decreasing suffix
    int i = n - 1;
    while (i > 0 && arr[i - 1] <= arr[i])
    {
        i--;
    }

    // Step 2: collect distinct values from prefix
    set<int> st;
    for (int j = 0; j < i; j++)
    {
        st.insert(arr[j]);
    }

    int operations = st.size();

    cout << "total number of operations performed: " << operations << endl;

    return 0;
}