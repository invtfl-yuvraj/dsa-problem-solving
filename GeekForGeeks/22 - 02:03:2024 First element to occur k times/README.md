# First Element to Occur k Times

## Overview

This repository contains a solution to the "First Element to Occur k Times" problem. The task is to find the first element that occurs at least k number of times in an array.

## Problem Statement

Given an array of n integers. Find the first element that occurs at least k number of times. If no such element exists in the array, then expect the answer to be -1.

**Example 1:**
- Input:
  n = 7, k = 2
  a[] = {1, 7, 4, 3, 4, 8, 7}
- Output: 4
- Explanation: Both 7 and 4 occur 2 times. But 4 is the first that occurs twice. At index = 4, 4 has occurred twice, whereas 7 appeared twice at index 6.

**Example 2:**
- Input:
  n = 10, k = 3
  a[] = {3, 1, 3, 4, 5, 1, 3, 3, 5, 4}
- Output: 3
- Explanation: Here, 3 is the only number that appeared at least 3 times in the array.

## Your Task:  

You don't need to read input or print anything. Your task is to complete the function `firstElementKTime()` which takes the array `a[]`, its size `n`, and an integer `k` as input arguments and returns the required answer. If the answer is not present in the array, return -1.

**Expected Time Complexity:** O(n).
**Expected Auxiliary Space:** O(n).

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.


