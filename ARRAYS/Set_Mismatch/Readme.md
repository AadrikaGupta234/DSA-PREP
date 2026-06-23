# Set Mismatch

## Problem Statement

You have a set of integers `s` that originally contains all the numbers from `1` to `n`. Unfortunately, due to an error, one number in the set is duplicated, causing another number to be missing.

Given an integer array `nums` representing the corrupted set, return an array of length 2 where:

* The first element is the duplicated number.
* The second element is the missing number.


## Constraints

```text
2 <= nums.length <= 10^4
1 <= nums[i] <= 10^4
```

---

## Approach

### Counting Frequency

Since the array should contain every number from `1` to `n` exactly once:

1. Count the frequency of each number.
2. Traverse numbers from `1` to `n`.
3. If a number appears twice, it is the duplicate.
4. If a number never appears, it is the missing number.
5. Return both values.

### Algorithm

```text
1. Create a count array of size n + 1.
2. Count occurrences of each number.
3. Iterate from 1 to n:
   - count[i] == 2 → duplicate number
   - count[i] == 0 → missing number
4. Return [duplicate, missing].
```

---


## Complexity Analysis

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(n)`

---


**Complexity:**

* Time: `O(n)`
* Space: `O(1)`

### In-Place Marking

Use the array itself to mark visited numbers by negating values at corresponding indices.

**Complexity:**

* Time: `O(n)`
* Space: `O(1)`
