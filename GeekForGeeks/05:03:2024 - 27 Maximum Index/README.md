# Maximum Index

## Overview

This repository contains a solution to the "Maximum Index" problem. The task is to find the maximum of j - i subjected to the constraint of a[i] < a[j] and i < j.

## Problem Statement

Given an array `a` of `n` positive integers. The task is to find the maximum of j - i subjected to the constraint of a[i] < a[j] and i < j.

**Example 1:**
- Input:
  n = 2
  a[] = {1, 10}
- Output: 1
- Explanation: a[0] < a[1], so (j-i) is 1-0 = 1.

**Example 2:**
- Input:
  n = 9
  a[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
- Output: 6
- Explanation: In the given array a[1] < a[7], satisfying the required condition (a[i] < a[j]), thus giving the maximum difference of j - i, which is 6 (7-1).

## Your Task:

The task is to complete the function `maxIndexDiff()` which finds and returns the maximum index difference. Printing the output will be handled by driver code.

**Expected Time Complexity:** O(N)
**Expected Auxiliary Space:** O(N)

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.

