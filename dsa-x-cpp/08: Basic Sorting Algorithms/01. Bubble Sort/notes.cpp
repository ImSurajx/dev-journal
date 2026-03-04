/*
- Explain the idea without code.
    - What is the goal?
        - the goal of bubble sort is when we match a condition swap that element with the next element, do this till array is sorted.
    - What happens in one pass?
        - here if we do one pass, then the thing is only one element will be move to end of array on each swapping the element move to next element position only if it's match condition.
    - Why largest element moves to the end?
        - it's not about largest element we can also move smallest to the end it's all about condtion like if we want to move largest element to end what we will do each time swap it with next element if it's larger than next.

- Dry Run This Array
    Default: [5, 1, 4, 2]
    1st Pass: [1, 5, 4, 2]
    2nd Pass: [1, 4, 5, 2]
    3rd Pass: [1, 4, 2, 5]
    4th Pass: [1, 2, 4, 5]

- Time Complexity
    - worst case : 
        - when array is [5,4,3,2,1]..
        - this time we have to preform n-1 pass so this is the worst case
        - so tc here is O(n^2)
    - average case :
        - when array is [1,2,4,5,3];
        - this is the average case where array will be sorted in in two passes
        - so tc here is also O(n^2) 
    - best case :
        - when array is [1,2,3,5,4];
        - this is the best case array will be sort in first pass.
        - so tc here is O(n)
- Optimization Question
    - we will create a flag tag just before inner loops start like isSwapped = false, then inside loop we will check if there is any swap happend then change it's value to true if not just after inner loops end we will check if isSwapped == false that mean array is sorted so break the loop.
    - the idea behind it if there is no swap that mean array is sorted so break the loop, because earlier our loop is running n-1 times even after sorting is done, so this condition will break the loop when array is sorted.
- Deep Engineer Question
    for i = 0 → n-1
            for j = 0 → n-i-1
    - the reason behind it, after each pass what happend basicly the most largest element move to end, we already know that the last element is the greatest so we skip checking that part.
    - let me explain in depth
        like when j goes till n - 1
            - what heappend each time it check sorted element to..
            - like if array is by deafult [1,2,4,5,3];
            - what will happend here in first instance the array become [1,2,4,3,5]; -> note 5 moved to end..
            - in next instance we will move 4 [1,2,3,4,5] -> in n-1 case we are checking each time n-1 element like from 0th index to n - 1 index 
            - which we don't have to beacuse each time when element is move to end till the last element which move to end is already sorted
            - so we don't to check those element again so we use j-i-1 when i is the idx value first time 0 next time 1 which mean avoid 1 element from last, it will goes till i == n - 1.
*/