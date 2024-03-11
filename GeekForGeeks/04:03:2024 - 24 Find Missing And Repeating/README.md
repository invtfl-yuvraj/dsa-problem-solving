# Find Missing And Repeating

## Overview

This repository contains a solution to the "Find Missing And Repeating" problem. The task is to find one missing number and one repeating number in an unsorted array.

## Problem Statement

Given an unsorted array `Arr` of size `N` of positive integers. One number 'A' from set {1, 2,....,N} is missing and one number 'B' occurs twice in the array. Find these two numbers.

**Example 1:**
- Input:
  N = 2
  Arr[] = {2, 2}
- Output: 2 1
- Explanation: Repeating number is 2 and the smallest positive missing number is 1.

**Example 2:**
- Input:
  N = 3
  Arr[] = {1, 3, 3}
- Output: 3 2
- Explanation: Repeating number is 3 and the smallest positive missing number is 2.

## Your Task:

You don't need to read input or print anything. Your task is to complete the function `findTwoElement()` which takes the array of integers `arr` and `n` as parameters and returns an array of integers of size 2 denoting the answer (The first index contains B and the second index contains A).

**Expected Time Complexity:** O(N)
**Expected Auxiliary Space:** O(1)

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.

