# 📘 Functions & Pointers – Complete Revision Notes (C++)

---

# 1️⃣ Functions in C++

## What is a Function?

A reusable block of code that performs a specific task.

Why we use it:
- Avoid repetition
- Improve readability
- Modular code
- Easier debugging
- Better logic structure

---

# 2️⃣ Structure of a Function

```cpp
return_type function_name(parameters){
    // body
    return value;
}
```

Example:

```cpp
int add(int a, int b){
    return a + b;
}
```

---

# 3️⃣ Function Parts

1. Return Type
2. Function Name
3. Parameters
4. Function Body
5. Return Statement

---

# 4️⃣ Types of Functions

### 🔹 No Return, No Parameter

```cpp
void greet(){
    cout << "Hello";
}
```

---

### 🔹 With Parameter, No Return

```cpp
void printSum(int a, int b){
    cout << a + b;
}
```

---

### 🔹 With Parameter and Return

```cpp
int square(int x){
    return x * x;
}
```

---

# 5️⃣ Pass by Value

```cpp
void func(int x){
    x = 10;
}
```

Original value does NOT change.

Why?
Because copy is created.

Memory view:

```
a = 5
func(a)

Inside func:
x = copy of a
```

---

# 6️⃣ Pass by Reference

```cpp
void func(int &x){
    x = 10;
}
```

Original value changes.

Why?
Because we pass actual memory reference.

Memory view:

```
a = 5
func(a)

x → same memory as a
```

---

# 7️⃣ Pointers Basics

## What is a Pointer?

A variable that stores the address of another variable.

---

## Declaration

```cpp
int a = 10;
int* p = &a;
```

- `&a` → address of a
- `*p` → value at address stored in p

---

# 8️⃣ Dereferencing

```cpp
cout << *p;
```

Prints value stored at that memory location.

---

# 9️⃣ Pointer Modification

```cpp
int a = 5;
int* p = &a;

*p = 20;
```

Now a becomes 20.

Because:
*p modifies the actual memory.

---

# 🔟 Null Pointer

```cpp
int* p = nullptr;
```

Never dereference null pointer.

Bad:

```cpp
*p = 10; // segmentation fault
```

Always check:

```cpp
if(p != nullptr)
```

---

# 1️⃣1️⃣ Pointer to Pointer

```cpp
int a = 10;
int* p = &a;
int** q = &p;
```

- p → address of a
- q → address of p

To access a:

```cpp
**q
```

---

# 1️⃣2️⃣ Functions with Pointers

## Modify value using pointer

```cpp
void modify(int* p){
    *p = 100;
}
```

Call:

```cpp
int a = 10;
modify(&a);
```

a becomes 100.

---

# 1️⃣3️⃣ Array & Pointer Relation

```cpp
int arr[3] = {1,2,3};
```

- arr → address of first element
- arr[0] == *(arr + 0)
- arr[1] == *(arr + 1)

Important:
Array name acts like constant pointer.

---

# 1️⃣4️⃣ Pointer Arithmetic

If:

```cpp
int* p = arr;
```

Then:

- p + 1 → next integer address
- p + 2 → two integers ahead

Memory jumps according to data type size.

---

# 1️⃣5️⃣ Dynamic Memory (Heap)

```cpp
int* p = new int;
*p = 10;
```

Delete memory:

```cpp
delete p;
```

---

Array dynamic:

```cpp
int* arr = new int[n];
delete[] arr;
```

---

# 1️⃣6️⃣ Function Returning Pointer

Be careful:

❌ Never return address of local variable.

Wrong:

```cpp
int* func(){
    int a = 10;
    return &a; // invalid
}
```

Because local variable destroyed after function ends.

---

# 1️⃣7️⃣ Reference vs Pointer

| Reference | Pointer |
|-----------|----------|
| Must initialize | Can be null |
| Cannot change reference | Can change target |
| Cleaner syntax | More flexible |

---

# 1️⃣8️⃣ Common Mistakes

❌ Dereferencing null pointer  
❌ Returning local variable address  
❌ Forgetting delete  
❌ Not understanding pass-by-value  
❌ Off-by-one pointer arithmetic  
❌ Confusing & and *  

---

# 🔥 Practice Questions

## Functions

- Swap two numbers (pass by value vs reference)
- Factorial using function
- Reverse array using function
- Return max element
- Return pointer from function (correctly)

---

## Pointers

- Swap using pointer
- Reverse array using pointer arithmetic
- Find sum using pointer
- Modify array using pointer
- Pointer to pointer practice
- Dynamic array creation

---

# 🎯 Before Moving Forward

Make sure you can:

- Explain pass-by-value vs reference clearly
- Explain what * and & do
- Dry run pointer to pointer
- Explain why null pointer crash happens
- Modify array using pointer only

---

# 🚀 Final Thought

Functions teach:
- Code structure
- Reusability
- Clean logic separation

Pointers teach:
- Memory understanding
- Deep control
- Real C++ fundamentals

If you master these,
your confidence in DSA increases massively.

---

End of Functions & Pointers Notes