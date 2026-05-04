// bubble sort: in each pass, what exactly gets fixed in its correct position?
// in each pass the largest element move to the end & the position of it's fixed because we reduce the size of array from the end.

// bubble sort optimization: why do we use "isSwapped" flag? what does it indicate?
// in bubble sort algorithm on each itration we swap element if, but we only swap if there is element who is present in unsorted order mean next one is smaller than current if the whole array is sorted the number of swap become zero so here isSwapped track the swap acitivity if there is no swap, isSwapped remain false, & that mean our array is sorted  & we break the loop using the isSwapped varible.

// Selection Sort:  What are you selecting in each iteration? Min or Max? And where are you placing it?
// in selection sort on each itration we are selecting the smallest element of the array & move it at the start of the that particular array & after each pass one element after moving to start we reduce the size of array from front,

// Does it matter if the array is already sorted? Does it still do full work or not?
// no in selection sort if array is sorted or not it's doesn't matter b/c it's not tracking anything like array is sorted or not the algorithm it self design to move smallest to the first & reduce array size that's why here always t.c is O(n^2);

// Insertion Sort Core Idea: Which part of the array is always sorted? Left side or right side?
// the left part of array is always sorted the core idea behind it we assume the left part is sorted & like we start from index 1 not 0 b/c we consider it sorted later we check if current index element is greater than previous that's fine if not swap until it's next element is smaller than the current number & previous number is greater than it's

// Insertion Sort Process: When inserting an element, do we swap repeatedly OR shift elements?
// what we check we check if previous element is smaller than current we swap, & repeat this process until element at correct postion till now i know the swap method maybe shift elemet also exist maybe see it in future

// Which sorting algorithm becomes O(n) in best case? Why?
// there are total two out of these three like first one is bubble sort but only optimisied one & the second one is insertion sort.
// best case for bubble sort is O(n) when array is alreay sorted & only n swap need to sort the array b/c we have a flag which track of break our condition at write moment so loop only run n times.
// insertion sort: best t.c here also same because here also the same reason we if all the element of left is sorted & we have to move only one element which make array sorted..

// Bubble Sort: after first pass
// arr = {5, 3, 4} -> {3, 4, 5} -> sorted, best case

// Selection Sort: after first pass
// arr = {5, 3, 4} -> {3, 5, 4}

// Insertion Sort: after first pass
// arr = {5, 3, 4} -> {3, 5, 4}

// Why is insertion sort faster than bubble sort for nearly sorted arrays?
// the reason behind it's in bubble sort we need alot of swaps & almost same goes for selection sort but in insertion sort we only needed swaps what need to swap, only happend if need b/c our outer condition prevent our loop form running nxn.

// Insertion Sort (clean code, no confusion)
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 3, 4};
    for (int i = 1; i < 3; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Why does insertion sort NOT need to check the right side?
// because we devide array in two part one is sorted where we shift our element & one is unsorted from where we shift our element for sorting the whole array we need both part 
// In selection sort, can we reduce comparisons if array is sorted? Why or why not?
// yes in selection sort we reduce our array because there we know by moving smallest element to the start array become sorted already so we just ignore that part so avoid much traversal.
// Which is better for nearly sorted array: Bubble OR Insertion? Explain in 1–2 lines properly.
// for nearly sorted insertion sort is better if it's has to only perform one insertion like there is one math concept which you teach mean earlier i guess it's known as inversion which mena number of element that is greater than a particular element that total number of inversion.