# Move Zeros to End of Array

## Overview

This repository contains a solution to the "Move Zeros to End of Array" problem. The task is to push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements.

## Problem Statement

Given an array `arr[]` of n positive integers. Push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements. Do the mentioned change in the array in-place.

### Example 1:

**Input:**
- N = 5
- Arr[] = {3, 5, 0, 0, 4}

**Output:**
- 3 5 4 0 0

**Explanation:**
The non-zero elements preserve their order while the 0 elements are moved to the right.

### Example 2:

**Input:**
- N = 4
- Arr[] = {0, 0, 0, 4}

**Output:**
- 4 0 0 0

**Explanation:**
4 is the only non-zero element and it gets moved to the left.

## Your Task

You don't need to read input or print anything. Complete the function `pushZerosToEnd()` which takes the array `arr[]` and its size `n` as input parameters and modifies `arr[]` in-place such that all the zeroes are moved to the right.

### Expected Time Complexity: O(n)
### Expected Auxiliary Space: O(1)

### Constraints:
- 1 ≤ N ≤ 10^5
- 0 ≤ arri ≤ 10^5

## How to Use
To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.
4. The program will prompt you to input the array for which you want to find the missing element.
5. The program will output the missing element.

###### Feel free to contribute improvements or alternative solutions by creating a pull request.
