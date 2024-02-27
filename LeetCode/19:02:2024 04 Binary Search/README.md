# Binary Search

## Overview

This repository contains a solution to the "Binary Search" problem. The task is to search for a target integer in a sorted array using the binary search algorithm with O(log n) runtime complexity.

## Problem Statement

Given an array of integers `nums` sorted in ascending order and an integer `target`, write a function to search for the target in `nums`. If the target exists, return its index; otherwise, return -1.

**Example 1:**
- Input: nums = [-1,0,3,5,9,12], target = 9
- Output: 4
- Explanation: 9 exists in nums, and its index is 4.

**Example 2:**
- Input: nums = [-1,0,3,5,9,12], target = 2
- Output: -1
- Explanation: 2 does not exist in nums, so return -1.

**Constraints:**
- 1 <= nums.length <= 10^4
- -10^4 < nums[i], target < 10^4
- All integers in nums are unique.
- nums is sorted in ascending order.


## Implementation

The solution is implemented in C++ and provided in the `solution.cpp` file.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.
4. The program will prompt you to input the array for which you want to find the missing element.
5. The program will output the missing element.

###### Feel free to contribute improvements or alternative solutions by creating a pull request.
