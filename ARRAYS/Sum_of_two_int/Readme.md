# Sum of Two Integers Using Bitwise Operations (C++)

This project demonstrates how to add two integers without using the `+` operator. Instead, it uses bitwise operations (`XOR` and `AND`) to calculate the sum.

---

## How It Works

The algorithm uses two bitwise operations:

### 1. XOR (`^`)
- Computes the sum of bits without considering carry.
- Example:

```text
5 = 0101
3 = 0011
---------
^ = 0110 (6)
```

### 2. AND (`&`)
- Identifies positions where both bits are `1`, which generates a carry.
- The carry is shifted left by one position:

```text
5 = 0101
3 = 0011
---------
& = 0001
carry = 0010
```

### Process

1. Calculate the carry using `(a & b) << 1`.
2. Calculate the partial sum using `a ^ b`.
3. Replace `b` with the carry.
4. Repeat until no carry remains (`b == 0`).

---

### Binary Representation

```text
9  = 01001
23 = 10111
```

The algorithm repeatedly computes:

```text
sum   = a ^ b
carry = (a & b) << 1
```

until the carry becomes zero.

---

## Time Complexity

- **Time Complexity:** O(number of bits)
- **Space Complexity:** O(1)

---

## Applications

- Understanding low-level arithmetic operations.
- Computer architecture and digital logic.
- Interview questions involving bit manipulation.
- Implementing arithmetic operations without standard operators.

---

## Key Insight

Addition can be broken into:
- **XOR** → Sum without carry.
- **AND + Left Shift** → Carry generation.

Repeating these steps eventually produces the final sum.