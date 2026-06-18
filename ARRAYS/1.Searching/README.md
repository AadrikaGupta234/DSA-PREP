# 🔍 Searching Algorithms in C++

This repository contains implementations of fundamental searching algorithms in C++:

- Linear Search
- Binary Search

These algorithms are widely used in Data Structures and Algorithms (DSA) for finding elements in arrays.

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

## 📌 2. Binary Search

### 🔹 Description
Binary Search is an efficient searching technique that works on sorted arrays by repeatedly dividing the search space into half until the target element is found or the range becomes empty.

### 🔹 Characteristics
- Works only on sorted arrays  
- Much faster than linear search for large datasets  
- Uses the divide and conquer approach  

### 🔹 Time Complexity
- Best Case: O(1)  
- Worst Case: O(log n)  

### 🔹 Space Complexity
- O(1)  

### 🔹 Algorithm
1. Set low = 0 and high = n - 1  
2. Find mid = (low + high) / 2  
3. Compare middle element with the key  
4. If match found → return index  
5. If key is smaller → search in left half (high = mid - 1)  
6. If key is larger → search in right half (low = mid + 1)  
7. Repeat until low <= high  
8. If not found → return -1  

---

## 🚀 Conclusion

- Linear Search is simple and works on unsorted data.
- Binary Search is faster but requires sorted data.
