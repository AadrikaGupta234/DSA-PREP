# Longest Repeating Character Replacement

## Problem Statement

You are given a string `s` consisting of only uppercase English letters and an integer `k`.

You may choose any character of the string and change it to any other uppercase English character at most `k` times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

---

## Constraints

```text
1 <= s.length <= 10^5
0 <= k <= s.length
s consists of only uppercase English letters.
---

## Approach

```text
Sliding Window + Frequency Counting

We use a sliding window to maintain the longest valid substring.

For each window:

Maintain frequency of characters
Track the most frequent character in the window (max_count)
If replacements needed exceed k, shrink the window from the left
Key Condition

A window is valid if:

window_size - max_count <= k
--- 

## Algorithm

```text
1. Initialize a frequency array of size 26.
2. Use two pointers: l = 0, r = 0.
3. Expand right pointer and update frequency.
4. Update max frequency in the window.
5. If window becomes invalid, shrink from the left.
6. Track maximum valid window size.
7. Return the result.

---

## Complexity Analysis


### Time Complexity

O(n)
Each character is processed at most twice.

---

### Space Complexity

O(1) 
Fixed size frequency array (26 letters).

---