# Product of Array Except Self

## Problem Statement

Given an integer array `nums`, return an array `answer` such that:

- `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.
- The solution must run in **O(n)** time.
- Division operation is **not allowed**.

#### Explanation

| Index | Element | Product of All Other Elements |
| ------- | ------- | ------- |
| 0 | 1 | 6 × 4 × 5 × 7 × 3 = 2520 |
| 1 | 6 | 1 × 4 × 5 × 7 × 3 = 420 |
| 2 | 4 | 1 × 6 × 5 × 7 × 3 = 630 |
| 3 | 5 | 1 × 6 × 4 × 7 × 3 = 504 |
| 4 | 7 | 1 × 6 × 4 × 5 × 3 = 360 |
| 5 | 3 | 1 × 6 × 4 × 5 × 7 = 840 |

---

## Approach

Instead of calculating the product for each index separately (which would take O(n²) time), we use:

1. **Prefix Product**
   - Store the product of all elements to the left of each index.

2. **Suffix Product**
   - Traverse from right to left and multiply the stored prefix product with the product of all elements to the right.

This eliminates the need for division and achieves linear time complexity.

---

## Algorithm

1. Initialize an answer array `ans` with all values as `1`.
2. Traverse from left to right:
   - Store prefix products in `ans`.
3. Traverse from right to left:
   - Multiply suffix products with existing values in `ans`.
4. Return `ans`.

---

## Complexity Analysis

| Metric | Complexity |
| -------- | -------- |
| Time Complexity | O(n) |
| Space Complexity | O(1) Extra Space* |

\* The output array is not counted as extra space.

---

## Key Takeaways

- No division operation is used.
- Uses prefix and suffix products.
- Efficient O(n) solution.
- Works correctly even when the array contains zeros.