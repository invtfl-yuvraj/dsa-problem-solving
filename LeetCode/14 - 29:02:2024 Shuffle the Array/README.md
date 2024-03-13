# Shuffle the Array

## Overview

This repository contains a solution to the "Shuffle the Array" problem. The task is to return the array in a specific form after shuffling elements.

## Problem Statement

Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn], return the array in the form [x1,y1,x2,y2,...,xn,yn].

**Example 1:**
- Input: nums = [2,5,1,3,4,7], n = 3
- Output: [2,3,5,4,1,7]
- Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

**Example 2:**
- Input: nums = [1,2,3,4,4,3,2,1], n = 4
- Output: [1,4,2,3,3,2,4,1]

**Example 3:**
- Input: nums = [1,1,2,2], n = 2
- Output: [1,2,1,2]

## Your Task:

You don't need to read input or print anything. Your task is to complete the function `shuffle()` which takes an array `nums[]` and an integer `n`. The function should return the array in the specified form after shuffling elements.

**Expected Time Complexity:** O(n)
**Expected Auxiliary Space:** O(n)

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.

