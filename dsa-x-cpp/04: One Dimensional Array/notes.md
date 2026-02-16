# 📘 1D Array & Vector – Complete Revision Notes (C++)

---

# 1️⃣ Basics

## What is a 1D Array?

A collection of elements stored in **contiguous memory**.

Example:

```cpp
int arr[5] = {1,2,3,4,5};
```

Size = 5  
Index range = 0 to 4  

Total elements = n  

---

# 2️⃣ Traversal

## Forward Traversal

```cpp
for(int i = 0; i < n; i++){
    cout << arr[i];
}
```

Time Complexity → O(n)

---

## Reverse Traversal

```cpp
for(int i = n-1; i >= 0; i--){
    cout << arr[i];
}
```

---

# 3️⃣ Vector Basics

## Declaration

```cpp
vector<int> v;
```

## With Initial Size

```cpp
vector<int> v(5);        // size = 5, values = 0
vector<int> v(5, 10);    // size = 5, values = 10
```

---

## Important Functions

| Function        | Meaning |
|---------------|----------|
| v.push_back(x) | add element at end |
| v.pop_back()   | remove last element |
| v.size()       | current size |
| v.capacity()   | allocated memory |
| v.clear()      | removes elements (size=0) |
| v.reserve(n)   | pre-allocate memory |

---

# 4️⃣ Size vs Capacity

Size → number of elements stored  
Capacity → allocated memory  

Example:

```cpp
vector<int> v(5);
```

Size = 5  
Capacity ≥ 5  

After:

```cpp
v.push_back(10);
```

Size = 6  

---

# 5️⃣ Pass by Value vs Reference

## Pass by Value

```cpp
void func(vector<int> v)
```

Creates copy → changes won't affect original.

## Pass by Reference

```cpp
void func(vector<int>& v)
```

Changes reflect in original.

---

# 6️⃣ Important Patterns

---

## 🔹 Find Maximum

```cpp
int maxVal = arr[0];
for(int i = 1; i < n; i++){
    if(arr[i] > maxVal)
        maxVal = arr[i];
}
```

Time → O(n)

---

## 🔹 Find Minimum

Same logic as max.

---

## 🔹 Reverse Array

Two pointer method:

```cpp
int i = 0, j = n-1;
while(i < j){
    swap(arr[i], arr[j]);
    i++;
    j--;
}
```

Time → O(n)

---

## 🔹 Prefix Sum

Used in many problems.

```cpp
vector<int> prefix(n);
prefix[0] = arr[0];

for(int i = 1; i < n; i++){
    prefix[i] = prefix[i-1] + arr[i];
}
```

---

## 🔹 Kadane’s Algorithm (Maximum Subarray)

```cpp
int sum = 0;
int maxi = INT_MIN;

for(int i = 0; i < n; i++){
    sum += arr[i];
    maxi = max(maxi, sum);
    if(sum < 0)
        sum = 0;
}
```

Time → O(n)

---

# 7️⃣ Sorting

```cpp
sort(arr, arr+n);
sort(v.begin(), v.end());
```

Time → O(n log n)

---

# 8️⃣ Binary Search (Sorted Array)

```cpp
int low = 0, high = n-1;

while(low <= high){
    int mid = (low + high)/2;

    if(arr[mid] == target)
        return mid;
    else if(arr[mid] < target)
        low = mid + 1;
    else
        high = mid - 1;
}
```

Time → O(log n)

---

# 9️⃣ Two Pointer Pattern

Used in:

- Remove duplicates
- Pair sum
- Container with most water

Example:

```cpp
int i = 0, j = n-1;

while(i < j){
    if(arr[i] + arr[j] == target)
        return true;
    else if(arr[i] + arr[j] < target)
        i++;
    else
        j--;
}
```

---

# 🔟 Sliding Window Pattern

Used when:

- Subarray
- Continuous elements
- Fixed or variable window size

Example (Fixed window sum):

```cpp
int sum = 0;
for(int i = 0; i < k; i++)
    sum += arr[i];

int maxSum = sum;

for(int i = k; i < n; i++){
    sum += arr[i];
    sum -= arr[i-k];
    maxSum = max(maxSum, sum);
}
```

Time → O(n)

---

# 1️⃣1️⃣ Frequency Counting

```cpp
unordered_map<int,int> mp;

for(int i = 0; i < n; i++){
    mp[arr[i]]++;
}
```

Used in:
- Majority element
- Duplicate detection
- Pair problems

---

# 1️⃣2️⃣ Time Complexity Summary

| Operation | Time |
|------------|-------|
| Traversal | O(n) |
| Reverse | O(n) |
| Find max/min | O(n) |
| Binary search | O(log n) |
| Sort | O(n log n) |
| Prefix sum | O(n) |
| Kadane | O(n) |
| Sliding window | O(n) |

---

# 🧠 Common Mistakes

❌ Off-by-one errors  
❌ Using <= instead of <  
❌ Not handling empty array  
❌ Integer overflow in mid calculation  
❌ Not resetting sum  
❌ Wrong pointer movement  

---

# 🔥 Must Practice Questions

## Easy
- Reverse array
- Find second largest
- Move zeroes
- Remove duplicates (sorted)
- Check sorted

## Medium
- Two sum
- Best time to buy & sell stock
- Maximum subarray
- Product of array except self
- Rotate array
- Container with most water

## Advanced Foundation
- Sliding window maximum
- Subarray sum equals k
- Longest subarray with sum k

---

# 🎯 Before Moving to Strings

Make sure you can:

- Dry run sliding window confidently
- Explain prefix sum clearly
- Write binary search without looking
- Implement Kadane from memory
- Use two pointer pattern comfortably

---

# 🚀 Final Thought

1D array teaches:

- Index discipline
- Pointer control
- State management
- Window techniques
- Optimization mindset

If 1D is strong,
Strings and sliding window problems become easier.

---

End of 1D Array Notes