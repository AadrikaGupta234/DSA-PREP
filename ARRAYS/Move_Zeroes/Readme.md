#🚀 Move Zeroes (Optimal C++ Solution)
##📌 Overview

This program solves the Move Zeroes problem using an efficient in-place two-pointer approach in C++.

It rearranges an array so that:

All 0 elements are moved to the end
The relative order of non-zero elements is preserved
No extra array is used
##🧠 Problem Statement

Given an integer array arr, move all zeros to the end while maintaining the order of non-zero elements.

You must do this in-place (without using extra space).

###📥 Example
Input:
arr = {1, 0, 0, 3, 9, 0, 13}
Output:
1 3 9 13 0 0 0
###⚙️ Approach (Two Pointer + Swap)
Idea:
Maintain a pointer j for the position of the next non-zero element
Traverse the array with pointer i
Whenever a non-zero element is found:
Swap it with arr[j]
Increment j
###🧾 Algorithm Steps
Initialize j = 0
Loop through the array using i
If arr[i] != 0:
Swap arr[i] and arr[j]
Increment j
Continue until the end of array
###⏱ Complexity Analysis
Time Complexity: O(n)
Space Complexity: O(1)
