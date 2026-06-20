# Rotate an Array

## Problem Statement

Given an array of integers and a number `d`, rotate the array to the left by `d` positions.

### Example

**Input**

```text
Array = [1, 3, 7, 5, 35, 76, 8]
d = 2
```

**Output**

```text
[7, 5, 35, 76, 8, 1, 3]
```

---

## What is Array Rotation?

Array rotation shifts elements by a specified number of positions.

---

## Approach : Reversal Algorithm (Optimal)

This is the most common interview solution.

### Steps

For Left Rotation by `d`:

1. Reverse first `d` elements.
2. Reverse remaining `n-d` elements.
3. Reverse the entire array.

### Example

```text
Array = [1, 3, 7, 5, 35, 76, 8]
d = 2
```

#### Step 1

```text
Reverse first 2 elements

[3, 1, 7, 5, 35, 76, 8]
```

#### Step 2

```text
Reverse remaining elements

[3, 1, 8, 76, 35, 5, 7]
```

#### Step 3

```text
Reverse complete array

[7, 5, 35, 76, 8, 1, 3]
```

---

## Complexity Analysis

| Operation        | Complexity |
| ---------------- | ---------- |
| Time Complexity  | O(n)       |
| Space Complexity | O(1)       |

---

## Edge Cases

### Rotation Greater Than Array Size

```text
Array Size = 7
d = 10

Effective Rotation = 10 % 7 = 3
```

Always perform:

```cpp
d = d % n;
```

---

## Key Concepts

* Arrays
* Left Rotation
* Reversal Algorithm
* Two Pointers
* In-place Modification

---

## Applications

* Circular Buffers
* Scheduling Algorithms
* Data Stream Processing
* Queue Rotations
* Competitive Programming Problems

---
