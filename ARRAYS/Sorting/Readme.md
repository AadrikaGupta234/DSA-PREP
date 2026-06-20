# Quick Sort

## Problem Statement

Given an array of integers, sort the array in ascending order using the **Quick Sort** algorithm.

### Example

**Input**

```text
[1, 6, 3, 2, 9, 13, 4, 67, 32, 0]
```

**Output**

```text
[0, 1, 2, 3, 4, 6, 9, 13, 32, 67]
```

---

## What is Quick Sort?

Quick Sort is a **Divide and Conquer** sorting algorithm.

It works by:

1. Choosing a **pivot** element.
2. Partitioning the array around the pivot.
3. Recursively sorting the left and right subarrays.

---

## How Quick Sort Works

### Initial Array

```text
[1, 6, 3, 2, 9, 13, 4, 67, 32, 0]
```

### Choose Pivot

```text
Pivot = 0
```

### Partition

Elements smaller than or equal to the pivot move to the left.

```text
[0, 6, 3, 2, 9, 13, 4, 67, 32, 1]
```

The pivot is now in its correct position.

### Recursive Calls

```text
QuickSort(left subarray)
QuickSort(right subarray)
```

Repeat until every subarray contains one or zero elements.

---

## Algorithm

```text
QuickSort(arr, start, end)

1. If start >= end, return
2. Find pivot position using partition()
3. Recursively sort left part
4. Recursively sort right part
```

---

## Partition Logic

```text
Choose last element as pivot

Initialize:
pos = start

Traverse array:
If current element <= pivot
    swap(arr[i], arr[pos])
    pos++

Finally:
swap(arr[pos], arr[end])

Return pos
```

---


## Complexity Analysis

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n log n)      |
| Average Case | O(n log n)      |
| Worst Case   | O(n²)           |

### Space Complexity

```text
O(log n)
```

Recursive call stack.

---

## Why Worst Case Occurs?

Worst case happens when the pivot is always the smallest or largest element.

Example:

```text
[1, 2, 3, 4, 5]
```

or

```text
[5, 4, 3, 2, 1]
```

when choosing the first or last element as pivot.

This causes highly unbalanced partitions.

---

## Advantages

* Fast in practice
* In-place sorting
* Cache friendly
* Widely used in real-world systems

---

## Disadvantages

* Worst-case complexity O(n²)
* Recursive implementation
* Not a stable sorting algorithm

---

## Comparison with Merge Sort

| Feature      | Quick Sort | Merge Sort |
| ------------ | ---------- | ---------- |
| Best Case    | O(n log n) | O(n log n) |
| Average Case | O(n log n) | O(n log n) |
| Worst Case   | O(n²)      | O(n log n) |
| Extra Space  | O(log n)   | O(n)       |
| Stable       | No         | Yes        |
| In-place     | Yes        | No         |

---

## Applications

* General-purpose sorting
* Competitive Programming
* Database Systems
* Operating Systems
* Large Data Processing

---

## Key Concepts

* Divide and Conquer
* Recursion
* Partitioning
* Pivot Selection
* In-place Sorting

---