// what is a pointer?
// a pointer is a special kind of varible which exist in c++, which are used to store the address of a varible & also mean a varible which point to a varible same like this in arrow function but there it's depend on js -> just ex both are completly different.

// why do we use pointers?
// we use pointer to store the address of varible there are some feature comes with pointer, like ealier we see shalow copy concept but what happend if we pass through pointer than it will become pass by reference & we can modify real values.

// declaring a pointer: same like normal varible but with a *
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    // storing address in pointer
    int *p = &x;        // why we use & with x when you log the &x it will give you the memory address where x is stored.
    cout << p << endl;  // print address of p
    cout << &x << endl; // print address of x  both are same.
    // let suppose if we have to print the value of x using pointer p then we can also do that using pointer see
    // dereferencing pointer
    cout << *p << endl; // it's mean check p, it has a address go to address & print that value.
    return 0;
}

// ques: predict the output
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x; // create a pointer name p which point to address of varible x.

    cout << *p << endl; // dereference, go to p check whose address it's stored, go to that address then print that values.
    *p = 20; // same like above, go to the address update that value of 20, we use derefrence here.
    cout << x << endl; // will print 20;
}

// ques: predict the output
#include <iostream>
using namespace std;
void change(int *p) // we are creating a pointer parameter
{
    *p = 50; // using derefrence to update value which is present on the address which pointer has
}

int main()
{
    int a = 10; 
    change(&a); // send address of a & the above function modify the value of a
    cout << a; // updated value will be printied which is 50.
}