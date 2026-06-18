# 🔍 Searching Algorithms in C++

This repository contains implementations of fundamental searching algorithms in C++:

- Linear Search
- Binary Search

These algorithms are widely used in Data Structures and Algorithms (DSA) for finding elements in arrays.

---

---

## 📌 1. Linear Search

### 🔹 Description
Linear Search checks each element of an array one by one until the target element is found or the array ends.

### 🔹 Characteristics
- Works on both sorted and unsorted arrays
- Simple but inefficient for large datasets

### 🔹 Time Complexity
- Best Case: O(1)
- Worst Case: O(n)

### 🔹 Space Complexity
- O(1)

### 🔹 Algorithm
1. Start from index 0
2. Compare each element with the key
3. If match found → return index
4. Else → return -1


---

## 📌 What is Binary Search?

Binary Search is a **divide and conquer algorithm** used to find an element in a sorted array.

Instead of checking each element one by one, it reduces the search space by half in each step.

---

## ⚙️ How It Works

1. Start with two pointers: `low` and `high`
2. Find the middle element: `mid = (low + high) / 2`
3. Compare middle element with the target:
   - If equal → element found
   - If target is smaller → search left half
   - If target is larger → search right half
4. Repeat until element is found or search space becomes empty

---

## 📈 Time & Space Complexity

- **Best Case:** O(1)
- **Worst Case:** O(log n)
- **Space Complexity:** O(1)

---

