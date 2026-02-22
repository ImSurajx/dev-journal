# Sliding Window Pattern Notes

---

# 1️⃣ Fixed Sliding Window

## 📌 When to Use

- Subarray/substring problems
- Window size is given (k)
- Need max/min/sum/average/count for size k

---

## 🧠 Core Idea

- Build first window of size k
- Slide window one step at a time
- Remove left element
- Add right element
- Update answer

---

## 🏗 Template (C++)

```cpp
int fixedSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    if (n < k) return 0;

    int sum = 0;

    // Step 1: Build first window
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    int maxSum = sum;

    // Step 2: Slide window
    for (int i = k; i < n; i++) {
        sum += nums[i];       // add new element
        sum -= nums[i - k];   // remove old element
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}
```

---

## ⏱ Time Complexity

- O(n)

## 📦 Space Complexity

- O(1)

---

## ⚠ Common Mistakes

- Not building first window separately
- Wrong index: i - k
- Overwriting max instead of using max()
- Confusing with variable window

---

# 2️⃣ Variable Sliding Window

## 📌 When to Use

- Subarray/substring problems
- Window size is NOT fixed
- Condition-based window
- Usually works when numbers are positive

### Examples

- Longest subarray with sum ≤ k
- Smallest subarray with sum ≥ k
- Longest substring without repeating characters

---

## 🧠 Core Idea

- Use two pointers: left and right
- Expand window by moving right
- If condition breaks → shrink from left
- Always update answer after fixing window
- Both pointers move only forward

---

## 🏗 Template (C++)

```cpp
int variableSlidingWindow(vector<int>& nums, int k) {
    int left = 0;
    int currentSum = 0;
    int maxLength = 0;

    for (int right = 0; right < nums.size(); right++) {

        currentSum += nums[right];   // expand window

        while (currentSum > k) {     // shrink window
            currentSum -= nums[left];
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}
```

---

## ⏱ Time Complexity

- O(n)
- Each element enters window once
- Each element leaves window once

## 📦 Space Complexity

- O(1)

---

## 🔥 Why It Works

- Works cleanly when numbers are positive
- Expanding increases sum
- Shrinking decreases sum
- No need to restart window

---

## ⚠ Important Limitation

If array contains negative numbers, this approach may fail because:

- Expanding might decrease sum
- Shrinking might increase sum
- Monotonic behavior breaks

---

# 3️⃣ Fixed vs Variable — Quick Comparison

| Fixed Window | Variable Window |
|--------------|-----------------|
| Size known (k) | Size dynamic |
| Always exactly k | Expands & shrinks |
| Remove 1, Add 1 | While loop to shrink |
| Works with negatives | Usually requires positives |
| Example: max sum of size k | Example: longest sum ≤ k |

---

# 🧠 Mental Checklist Before Using Sliding Window

Ask:

- Is this subarray/substring?
- Is size fixed?
- Is condition monotonic?
- Are numbers positive?
- Do I need longest/smallest/count?

If YES → Sliding Window candidate.

---

# 🎯 Today’s Learning Summary

You now understand:

- Fixed Sliding Window
- Variable Sliding Window
- Why positivity matters
- Why sum == k is different from sum ≤ k
- Why sliding window sometimes fails

More patterns will be added gradually.
