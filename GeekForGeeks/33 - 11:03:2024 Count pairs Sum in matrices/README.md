# Count Pairs with Sum in Matrices

## Problem Statement

Given two sorted matrices `mat1` and `mat2` of size n x n of elements. Each matrix contains numbers arranged in strictly ascending order, with each row sorted from left to right, and the last element of a row being smaller than the first element of the next row. You're given a target value, x, your task is to find and count all pairs {a, b} such that a is from `mat1` and b is from `mat2` where the sum of a and b is equal to x.

### Example 1:

Input: 
n = 3, x = 21
mat1 = {{1, 5, 6},
        {8, 10, 11},
        {15, 16, 18}}
mat2 = {{2, 4, 7},
        {9, 10, 12},
        {13, 16, 20}}
Output: 4
Explanation: The pairs whose sum is found to be 21 are (1, 20), (5, 16), (8, 13), (11, 10).

### Example 2:

Input:
n = 2, x = 10
mat1 = {{1, 2},
        {3, 4}}
mat2 = {{4, 5},
        {6, 7}}
Output: 2
Explanation: The pairs whose sum found to be 10 are (4, 6), (3, 7).

## Approach

To solve this problem, we can start from the bottom-left corner of the first matrix and the top-right corner of the second matrix. We can keep track of the sum of the current elements in both matrices. If the sum is equal to the target value, we increment the count of pairs. If the sum is less than the target value, we move to the right in the first matrix. If the sum is greater than the target value, we move up in the second matrix. We repeat this process until we have traversed the entire matrix or until we find all pairs with the target sum.

## Implementation

The solution to this problem can be found in the `solution.cpp` file provided in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.


