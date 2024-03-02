# Searching in an Array

## Overview

This repository contains a solution to the "Searching in an array where adjacent differs by at most k" problem. The task is to find the index value of a given key in an array where adjacent elements have a difference of at most k.

## Problem Statement

A step array is an array of integers where each element has a difference of at most k with its neighbor. Given a key x, we need to find the index value of x if multiple elements exist, and return the first occurrence of the key.

**Example 1:**
- Input: arr[ ] = {4, 5, 6, 7, 6}, K = 1 
          X = 6
- Output: 2
- Explanation: In an array arr, 6 is present at index 2. So, return 2.

**Example 2:**
- Input: arr[ ] = {20, 40, 50}, K = 20 
          X = 70
- Output: -1
- Explanation: Element 70 is not present in the array.

## Your Task:

This is a function problem. The input is already taken care of by the driver code. You only need to complete the function `search()` that takes an array (arr), sizeOfArray (n), an integer value X, another integer value K, and returns an integer displaying the index of the element X in the array arr. If the element is not present in the array, return -1. The driver code takes care of the printing.

**Expected Time Complexity:** O(N).
**Expected Auxiliary Space:** O(1).

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.

