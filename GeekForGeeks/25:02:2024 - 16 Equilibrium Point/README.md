# Equilibrium Point

## Overview

This repository contains a solution to the "Equilibrium Point" problem. The task is to find the first equilibrium point in an array.

## Problem Statement

Given an array A of n non-negative numbers. The task is to find the first equilibrium point in an array. Equilibrium point in an array is an index (or position) such that the sum of all elements before that index is the same as the sum of elements after it.

Note: Return the equilibrium point in 1-based indexing. Return -1 if no such point exists.

**Example 1:**
- Input:
  n = 5 
  A[] = {1, 3, 5, 2, 2}
- Output: 
  3 
- Explanation:  
  The equilibrium point is at position 3 as the sum of elements before it (1+3) is equal to the sum of elements after it (2+2).

**Example 2:**
- Input:
  n = 1
  A[] = {1}
- Output: 
  1
- Explanation: Since there's only one element, hence it's the only equilibrium point.

## Your Task:

The task is to complete the function `equilibriumPoint()` which takes the array and n as input parameters and returns the point of equilibrium.

**Expected Time Complexity:** O(n)
**Expected Auxiliary Space:** O(1)

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.

