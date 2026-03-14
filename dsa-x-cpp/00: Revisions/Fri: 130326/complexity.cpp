// What does this mean?
// O(1):  the 1 inside the O represent number of operation performed by a program like you can see here it's one which is a constent which mean O(n) or O(1) both are same because we are talking in the form of big O

// What is the time complexity of:
// for(int i = 0; i < n; i++): the t.c here will be O(n) which mean this loop perform n number of operations, tc = number of operations.

// What is the time complexity of:
// for(int i = 0; i < n; i++){
// for(int j = 0; j < n; j++): the total number of operation here performed is n x n both are independent loops so t.c, each time inner loop run n times for each value of n so t.c will be O(nxn)

// What is complexity here?
// for(int i = 1; i < n; i *= 2): here we can see exponential growth which mean the t.c must be in log it's exponetial & mean if n is 16, so loop will run 1, 2, 4, 8, 16 mean 2^0 2^1 2^2 2^4 from where we can get k like loop will run till 2^k <= n from where we will get the value of k which mean k = log n with base 2 which is equal to log n.