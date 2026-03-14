// bubble sort:

// how does bubble sort work?
// what we do in bubble sort we start from 0th element what we do we compare it to next element if it's greater then next swap & if not move next & compare that to next element what this thing do it will move the largest element to the end on each itration, till array is sorted this is default behaviour but each time we have to reduce the size of array & also we can optimise is using condition like if there is no swap that mean array is sorted, best or worst for optimise bubble sort algo is: worst: O(n^2), best: O(n)

// Compare adjacent elements
// Swap if they are in the wrong order
// Largest element moves to the end after each pass
// Repeat until array is sorted

// why is it called "bubble"?
// because it's create the same water effect when we throw a stone in water the larget wave move to the end but that originated from start.

// selection sort:

// what do we select in each iteration?
// on each itration what we do basicly find the smallest element swap it with the first element of that particular array later reduce array from front consider the moved element sorted, so we have to do this agin but only after that first element & repeat this process until all element swaps to 1st position & new array size become 0, so we select elemen to move it to first index reduce the size of array so our array can become sorted. here t.c will be O(n^2).

// Find the minimum element from the unsorted part
// Swap it with the first unsorted position
// Move the boundary forward

// insertion sort
// what do we insert and where?
// what we do here we start with 1st index element & we check for two condition if previous element is less than current place this element here & if not then swap it with it & check next element, keep doing this at repeat until the array is sorted, so basicly what we are doing herre is insertion of a element on a position where it's make array sorted, & each time move next element after instertion until all elements moves. there is also concept of inversion through which we can directly count how many insertion will required to sort a array, t.c here will O(n), & O(n^2)

// Take one element
// Compare with previous elements
// Shift larger elements right
// Insert the element in the correct position

// using bubble sort
#include <iostream>
using namespace std;
int main()
{
    // Compare adjacent elements
    // Swap if they are in the wrong order
    // Largest element moves to the end after each pass
    // Repeat until array is sorted
    int arr[5] = {5, 1, 4, 2, 8};
    // here outer loop work is only to run inner loop n times..
    for (int i = 0; i < 5; i++)
    {
        bool isSwap = false;
        // this loop contains bubble sort algorithm
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
            break;
    }
    cout << "array is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
