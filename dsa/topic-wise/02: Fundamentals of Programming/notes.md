# 📘 Fundamentals of Programming – Complete Notes

---

# 1️⃣ What is Programming?

Programming = Giving step-by-step instructions to a computer to solve a problem.

Computer only understands:
- Logic
- Structure
- Precision

No assumptions.

---

# 2️⃣ How a Program Runs

1. Write Code
2. Compile (convert to machine code)
3. Execute
4. Output

In C++:

Source Code → Compiler → Executable → Output

---

# 3️⃣ Basic Structure of a C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {
    // code
    return 0;
}
```

Important:
- main() is entry point
- Program starts from main()

---

# 4️⃣ Variables

A variable stores data.

```cpp
int a = 10;
```

Memory is allocated.
Each variable has:
- Name
- Type
- Value
- Memory address

---

# 5️⃣ Data Types

## 🔹 Primitive Types

| Type | Example |
|------|---------|
| int | 10 |
| float | 10.5 |
| double | 20.555 |
| char | 'A' |
| bool | true/false |

---

# 6️⃣ Input & Output

```cpp
cin >> a;
cout << a;
```

cin → input  
cout → output  

---

# 7️⃣ Operators

## Arithmetic

+  -  *  /  %

## Comparison

==  !=  >  <  >=  <=

## Logical

&&  ||  !

---

# 8️⃣ Conditional Statements

## if

```cpp
if(condition){
    // code
}
```

## if-else

```cpp
if(condition){
} else {
}
```

## else-if ladder

```cpp
if(){
}
else if(){
}
else{
}
```

---

# 9️⃣ Switch

Used when multiple fixed cases exist.

```cpp
switch(value){
    case 1:
        break;
}
```

---

# 🔟 Loops

Loops repeat code.

## for loop

```cpp
for(int i=0; i<n; i++){
}
```

## while loop

```cpp
while(condition){
}
```

## do-while

```cpp
do{
} while(condition);
```

---

# 1️⃣1️⃣ Loop Control

- break → exit loop
- continue → skip iteration

---

# 1️⃣2️⃣ Nested Loops

Loop inside loop.

Used in:
- Patterns
- Matrices
- DSA

Time Complexity idea:
If loop inside loop → often O(n²)

---

# 1️⃣3️⃣ Functions

Used to:
- Organize code
- Reuse logic
- Avoid repetition

```cpp
int add(int a, int b){
    return a + b;
}
```

---

# 1️⃣4️⃣ Arrays

Collection of same type elements.

```cpp
int arr[5];
```

Access:

```cpp
arr[0]
```

Memory is contiguous.

---

# 1️⃣5️⃣ 2D Arrays

Matrix form.

```cpp
int arr[3][4];
```

Access:

```cpp
arr[i][j]
```

Used in:
- Matrix problems
- Grid problems
- Spiral traversal
- DSA fundamentals

---

# 1️⃣6️⃣ Basic Time Complexity Thinking

If:

One loop → O(n)  
Two nested loops → O(n²)  
Three nested loops → O(n³)

Important:
Always count how many times main work runs.

---

# 1️⃣7️⃣ Problem Solving Steps

1. Understand problem
2. Identify input
3. Identify output
4. Think brute force
5. Improve logic
6. Dry run
7. Code
8. Test

---

# 1️⃣8️⃣ Common Beginner Mistakes

❌ Off-by-one errors  
❌ Wrong loop condition  
❌ Using uninitialized variable  
❌ Infinite loop  
❌ Wrong boundary check  
❌ Forgetting return  

---

# 1️⃣9️⃣ Dry Run Skill

Dry run means:
Execute code manually on paper.

Why important?
Because debugging brain > debugging IDE.

---

# 2️⃣0️⃣ Programming Mindset

Computer:
- Does exactly what you say
- Not what you mean

So:
Be precise.
Think in steps.
Break problem into small parts.

---

# 🔥 Must Practice Problems

## Conditionals
- Even/Odd
- Largest of 3 numbers
- Leap year

## Loops
- Factorial
- Reverse number
- Count digits
- Prime check

## Nested loops
- Pattern printing
- Multiplication table

## Arrays
- Find max/min
- Reverse array
- Sum of elements
- Linear search

## 2D Arrays
- Matrix transpose
- Matrix multiplication
- Spiral traversal
- Row/column sum

---

# 🎯 What Fundamentals Actually Mean

Not syntax.

But:
- Thinking step-by-step
- Understanding memory
- Understanding loops deeply
- Predicting behavior before running

---

# 🚀 Final Truth

If fundamentals are weak:
DSA feels hard.

If fundamentals are strong:
DSA becomes logic building.

---

End of Fundamentals of Programming