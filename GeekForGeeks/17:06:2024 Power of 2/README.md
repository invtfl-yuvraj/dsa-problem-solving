# Power of 2

## Problem Statement
Given a non-negative integer `n`. The task is to check if it is a power of 2.

## Examples

**Example 1:**
**Input:**
n = 8
**Output:**
true
**Explanation:**
8 is equal to 2 raised to 3 (2^3 = 8).

**Example 2:**
**Input:**
n = 98
**Output:**
false
**Explanation:**
98 cannot be obtained by any power of 2.

**Example 3:**
**Input:**
n = 1
**Output:**
true
**Explanation:**
2^0 = 1.

## Constraints
- 0 ≤ n < 10^20

## Expected Time Complexity
- O(log n)

## Expected Auxiliary Space
- O(1)

## Approach
1. **Base Case**: Check if `n` is 0. If it is, return `false` since 0 is not a power of 2.
2. **Bitwise AND Operation**: For a number to be a power of 2, it should have exactly one bit set to 1 in its binary representation. This can be checked using the condition `n & (n - 1) == 0`.
3. **Check for Positive**: Ensure `n` is positive.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp