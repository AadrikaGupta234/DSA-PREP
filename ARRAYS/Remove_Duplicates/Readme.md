# Remove Duplicates from Sorted Array (C++)

## Problem Statement

Given a sorted array, remove the duplicate elements in-place such that each unique element appears only once.

The unique elements are moved to the beginning of the array, and the remaining positions can be considered unused (represented here as `_` for visualization).

---

## Approach

This solution uses the **Two Pointer Technique**:

* `j` points to the last unique element found.
* `i` traverses the array.
* Whenever a new unique element is found, increment `j` and place the element at index `j`.

### Algorithm

1. Initialize `j = 0`.
2. Traverse the array from index `1` to `n-1`.
3. If `arr[i] != arr[j]`:

   * Increment `j`.
   * Copy `arr[i]` to `arr[j]`.
4. Return `j + 1`, which represents the number of unique elements.

---

## Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Traversal | O(n)       |

**Total Time Complexity:** `O(n)`

---

## Space Complexity

No extra data structure is used.

**Space Complexity:** `O(1)`

---

## Concepts Used

* Arrays / Vectors
* Two Pointer Technique
* In-place Modification
* Time and Space Optimization

---

## Aadrika Gupta
