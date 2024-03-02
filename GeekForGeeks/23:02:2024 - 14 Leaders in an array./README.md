# Leaders in an Array

## Overview

This repository contains a solution to the "Leaders in an Array" problem. The task is to find the leaders in the array. An element in the array is a leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

## Problem Statement

Given an array A of positive integers. Your task is to find the leaders in the array. An element of the array is a leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

**Example 1:**
- Input: n = 6
  A[] = {16,17,4,3,5,2}
- Output: 17 5 2
- Explanation: The first leader is 17 as it is greater than all the elements to its right. Similarly, the next leader is 5. The rightmost element is always a leader so it is also included.

**Example 2:**
- Input: n = 5
  A[] = {1,2,3,4,0}
- Output: 4 0
- Explanation: 0 is the rightmost element and 4 is the only element which is greater than all the elements to its right.

## Your Task:

This is a function problem. The input is already taken care of by the driver code. You only need to complete the function `leader()` which takes an array A and n as input parameters and returns an array of leaders in order of their appearance.

**Expected Time Complexity:** O(n)
**Expected Auxiliary Space:** O(n)

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.

