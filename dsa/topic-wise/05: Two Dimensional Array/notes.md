# 📘 2D Matrix / 2D Array – Complete Revision Notes (C++)

---

# 1️⃣ Basics

## What is a 2D Array?

A 2D array is an array of arrays.

It is stored in **row-major order** in C++.

If matrix is:

m x n

Then:
- m → rows
- n → columns
- Total elements = m * n

Declaration:

```cpp
int arr[m][n];
```

Dynamic version:

```cpp
vector<vector<int>> matrix(m, vector<int>(n));
```

---

# 2️⃣ Traversal Patterns

## 🔹 Row-wise Traversal

```cpp
for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        cout << matrix[i][j];
    }
}
```

Time Complexity → O(m * n)

---

## 🔹 Column-wise Traversal

```cpp
for(int j = 0; j < cols; j++){
    for(int i = 0; i < rows; i++){
        cout << matrix[i][j];
    }
}
```

---

# 3️⃣ Important Matrix Concepts

### ✅ Condition for Matrix Multiplication

If:

Matrix A → m x n  
Matrix B → p x q  

Multiplication possible only if:

n == p

Result matrix will be:

m x q

Time Complexity → O(m * n * q)

---

# 4️⃣ Spiral Traversal

Key Variables:

```
minRow = 0
maxRow = rows - 1
minCol = 0
maxCol = cols - 1
```

Direction order:
```
Right → Down → Left → Up
```

Condition:
```
while(minRow <= maxRow && minCol <= maxCol)
```

Time Complexity → O(m * n)

---

# 5️⃣ Generate Spiral Matrix (n x n)

Fill numbers from 1 → n².

Same boundary shrinking logic as spiral traversal.

---

# 6️⃣ Pascal’s Triangle

Important Concept:

Each element:

```
v[i][j] = v[i-1][j] + v[i-1][j-1]
```

Edge condition:

```
if(j == 0 || j == i) → 1
```

Time Complexity → O(n²)

---

# 7️⃣ Set Matrix Zero (LeetCode 73)

Basic Approach:
- Store zero positions
- Then zero out row & column

Optimized Approach:
- Use first row and first column as markers
- O(1) extra space

Important Concept:
State management matters.

---

# 8️⃣ Rotate Matrix 90 Degrees

For square matrix only.

Method:

1. Transpose
2. Reverse each row

Time Complexity → O(n²)

---

# 9️⃣ Binary Matrix to Decimal Conversion

For row:

Binary like: 1 1 0 1

Formula:

```
sum += matrix[i][j] * 2^(position)
```

Efficient way:

```cpp
int value = 0;
for(int j = 0; j < cols; j++){
    value = value * 2 + matrix[i][j];
}
```

---

# 🔟 Search in Sorted Matrix (LeetCode 240)

Matrix properties:
- Each row sorted
- Each column sorted

Best approach:

Start from:
Top-right corner

If:
- current > target → move left
- current < target → move down

Time Complexity → O(m + n)

---

# 1️⃣1️⃣ Time Complexity Summary

| Problem Type            | Time Complexity |
|-------------------------|----------------|
| Traversal               | O(m*n)        |
| Matrix Multiplication   | O(m*n*q)      |
| Spiral Traversal        | O(m*n)        |
| Rotate Matrix           | O(n²)         |
| Search Sorted Matrix    | O(m+n)        |
| Pascal Triangle         | O(n²)         |

---

# 🧠 Common Mistakes

❌ Forgetting boundary checks in spiral  
❌ Wrong loop direction (j++ instead of j--)  
❌ Confusing rows and columns  
❌ Accessing invalid index  
❌ Not resetting variables inside loops  
❌ Not handling last operator before evaluation  

---

# 🔥 Must Practice Questions

## Easy
- Print matrix row-wise
- Print matrix column-wise
- Matrix transpose
- Add two matrices
- Multiply two matrices

## Medium
- Spiral traversal
- Generate spiral matrix
- Rotate matrix
- Set matrix zero
- Pascal triangle
- Pascal triangle row
- Binary matrix score
- Search in sorted matrix

## Hard (Optional)
- Word search
- Maximum rectangle
- Game of life

---

# 🎯 Before Moving to Strings

Make sure you can:

- Dry run spiral without confusion
- Explain matrix multiplication from scratch
- Explain O(m*n) clearly
- Handle boundary conditions confidently
- Convert binary row to decimal without mistakes
- Use vector<vector<int>> without hesitation

---

# 🚀 Final Thought

2D Matrix teaches:

- Boundary thinking
- Index control
- State management
- Nested loop control
- Space vs Time tradeoff

If you master matrix problems,
Strings and sliding window will feel easier.

---

End of 2D Matrix Notes