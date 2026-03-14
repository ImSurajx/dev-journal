// What is the difference between:
// int arr[5];
// this mean we are creating a array of fixed size which can store 5 integers values, in a continues memory allocation
// - create 5 continuesion memory block
// - the size is fixed can't change in the future
// - total number of element it can store is 5, mean five integers only.
// vector<int> v;
// this mean we are creating a vector with size of capacity 0 there is no initial element we have to push it, it's size or capacity depends on how many element we push it in after creation.
// - create a vector v
// - whose initial size is 0
// - size & capactiy will change according to the user, like how many element he want to push in it.

// Predict the output:
#include <iostream>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3}; // create a vector with initial size 3 & capacity 3 & element of vector is 1,2,3
    v.push_back(4);            // the size of vector become 4 & capacity increase from 3 to 6 & also there is a new element 1,2,3,4
    v.pop_back();              // remove the last element from the vector then size become 3 & capacity remains same as it was 6, array will be 1,2,3
    cout << v.size() << endl;  // print 3, as we already see the reason above.
    cout << v[2] << endl;      // go inside vector array & go to the 2nd index & print the element of that index which is 3.
    return 0;
}

// What is the difference between: we can check the difference by checking the user pushes in a array
// suppose there is a vector name v = {1,2,3}; // size: 3, capacity is 3, you will think both are same intialy but wait
// user push a element in vector like 4 then v become {1,2,3,4}; // now size is 4 but capacity is 6 why? because when we are taking about size that mean number of element stored in vector but when we are talking about capacity that mean number of element that vector can store, when vector capacity is full & we try to add a element it will double it capacity
// user pushes another element like 5 in v so {1,2,3,4,5}; // now size is 5 & capacity remain 6? why capacity remain same b/c it only changes when size of array or capacity of vector is equal & we are trying to add a element it goes directly 2x of it's current size in more detail we disscused earlier.
// v.push(6), {1,2,3,4,5,6} // size: 6, capacity 6
// v.push(7), {1,2,3,4,5,6} // size: 7, capacity 12 -> see this is what i'm taking about.
// v.size(): size mean total number of element that vector is holding currently.
// v.capacity(): capacity mean total number of element that vector can hold.

// print the largest number of array
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "total number of element: ";
    cin >> n;
    vector<int> v;
    cout << "enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max)
            max = v[i];
    }
    cout << "largest element is: " << max << endl;
    return 0;
}
