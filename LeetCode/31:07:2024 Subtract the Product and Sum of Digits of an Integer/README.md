# Subtract the Product and Sum of Digits of an Integer

## Problem Statement

Given an integer number `n`, return the difference between the product of its digits and the sum of its digits.

## Examples

**Example 1:**

**Input:**  
n = 234

**Output:**  
15

**Explanation:**  
- Product of digits = 2 * 3 * 4 = 24  
- Sum of digits = 2 + 3 + 4 = 9  
- Result = 24 - 9 = 15

**Example 2:**

**Input:**  
n = 4421

**Output:**  
21

**Explanation:**  
- Product of digits = 4 * 4 * 2 * 1 = 32  
- Sum of digits = 4 + 4 + 2 + 1 = 11  
- Result = 32 - 11 = 21

## Constraints

- `1 <= n <= 10^5`

## Expected Time Complexity

- O(d), where d is the number of digits in `n`.

## Expected Auxiliary Space

- O(1)

## Approach

1. **Initialization**: Start with `product = 1` and `sum = 0`.
2. **Iteration**: Extract each digit of the number `n` by repeatedly taking `n % 10` and then performing integer division `n / 10`.
   - Update the `product` by multiplying the current digit.
   - Update the `sum` by adding the current digit.
3. **Calculation**: Once all digits are processed, compute the difference between the `product` and the `sum`.
4. **Return**: Return the computed difference.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp