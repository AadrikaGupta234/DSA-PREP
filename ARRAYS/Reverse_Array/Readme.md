# Reverse an Array

## Problem Statement

Given an array of integers, reverse the array in-place.

### Example

**Input**

```text
[1, 3, 7, 5, 35, 76, 8]
```

**Output**

```text
[8, 76, 35, 5, 7, 3, 1]
```

---

## Approach

Use the **Two Pointer Technique**:

1. Initialize two pointers:

   * `start = 0`
   * `end = n - 1`
2. Swap the elements at `start` and `end`.
3. Increment `start` and decrement `end`.
4. Repeat until `start >= end`.

---

## Algorithm

```text
start = 0
end = n - 1

while(start < end)
    swap(arr[start], arr[end])
    start++
    end--
```
---

## Complexity Analysis

| Complexity       | Value |
| ---------------- | ----- |
| Time Complexity  | O(n)  |
| Space Complexity | O(1)  |

---

## Key Concepts

* Arrays
* Two Pointer Technique
* In-place Reversal
* Swapping Elements

---

## STL Alternative

C++ provides a built-in function to reverse an array or vector.

```cpp
#include <algorithm>

reverse(arr.begin(), arr.end());
```

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---
## Aadrika Gupta