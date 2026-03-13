// what is an array?
// a array is specil kind of varible in which we store similar type of data, like collection of data which has same data type, like we want to store num till hundered what we will do in genral create 100 variable & store counting in them but this process is lengthy we can't do for 1 lakh value so we create a array & set a loop to fill it's value. array index goes from 0 to n - 1

// why do we use arrays?
// we use array to store collection of data but all of them must be similar kind of data because we are using it in c++ not in js.

// ques: write code to:
// create an array of size 5
// take input
// print all elements
#include <iostream>
using namespace std;
int main()
{
    // create a array of size 5 with initial value 0
    int arr[5];
    cout << "enter elements of array: ";
    // go on each index then put a values on that index, we use arr[index] -> to access the value.
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    // print array go on each index get the value & update it
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// ques: maximum element in an array
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 2, 8, 1, 6};
    int max = INT_MIN;
    for (int i = 0; i < 5; i++) // traverse on each index of array
    {
        if (arr[i] > max) // check if it's greater than max if it is update the max
            max = arr[i];
    }
    cout << "the max is: " << max << endl;
    return 0;
}

// ques: pridict the output
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2,4,6,8,10};

    cout << *(arr + 2) << endl; // here arr mean address of 0th index if we add 2 in it there is two posiblity one is it move to next element b/c each integer array each element has 4 byte but that work only if we are using (arr)++ so that's not possible it's smilar to that here we are moving 2 block which mean our next pointer index will be 0+2 which is 2nd & * mean go to the address & print that value so it will return 6.
}

// ques: write a program to reverse
#include <iostream>
using namespace std;
// this function make array reverse: why it's working b/c by default when we pass array it's pass by reference because the function recive the address of 0th element through which it can access the whole array.
void reverse(int arr[], int size)
{
    // what we are doing
    int i = 0;        // point 0th index
    int j = size - 1; // point last index
    while (i < j)     // loop will run till i become > than j
    {
        // we are swaping element until i become > than j
        // why we swap when you see on paper, what we are doing swaping first element with last & last with first & breaking loop when half element is almost swap b/c if we don't then array remain same that's why we use two pointer, half swaping mean element at start move at end & end one move to start.
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    cout << "reverse array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// ques:  count elements greater than x
#include <iostream>
using namespace std;
// as i told ealier array pass address of 0th index that's why it's working.
int returnCount(int arr[], int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > x) // find the number of element which is greater than x.
            count++;
    }
    return count;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int count = returnCount(arr, 5, 3); // now we are familer with fnc so i think i don't have to explain this part, it's just return a integer value.
    cout << "element greater than x is: " << count << endl;
    return 0;
}

// ques: second maximum element in an array
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {5, 2, 8, 1, 6};
    int max = INT_MIN, smax = INT_MIN;
    for (int i = 0; i < 5; i++) // traverse on each index of array
    {
        if (arr[i] > max) // check if it's greater than max if it is update the max
        {
            smax = max; // first put max value into smax then update it, we are storing smax by default
            max = arr[i];
        }
        else if (max != arr[i] && smax < arr[i])
        { // exception what if max is the largest but not equal to array element but that element is greater than smax then we also have to update smax
            smax = arr[i];
        }
    }
    cout << "the max is: " << max << endl;
    cout << "the second max is: " << smax << endl;
    return 0;
}

// What is the difference between array vs vector.
// the issue with array is once we create it the size of array is fixed we can't change it everything depend when it's initilized, & also we have to calculate the size of array manullay so fix this issue vector come in picture it's same like array with dynamic size, vector has two properties one is size one is capacity & we can also get direct size of vector using it's method & there are some extra feature which only availble in vector let's see how vector work like suppor we create a vector with size 5 later we want to add a element when you push these element to vector what vector will do it will double it's capacity like 5 to 10, now you add 5 more element now total element is 10 now want to add one more you push again the size double it'self it's keep happening that's why it's better also provide alots of methods to user.
