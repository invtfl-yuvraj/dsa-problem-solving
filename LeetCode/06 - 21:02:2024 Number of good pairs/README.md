# Number of Good Pairs

## Overview

This repository contains a solution to the "Number of Good Pairs" problem. The task is to find the number of good pairs in an array.

## Problem Statement

Given an array of integers `nums`, return the number of good pairs. A pair (i, j) is called good if `nums[i] == nums[j]` and `i < j`.

**Example 1:**
- Input: nums = [1,2,3,1,1,3]
- Output: 4
- Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

**Example 2:**
- Input: nums = [1,1,1,1]
- Output: 6
- Explanation: Each pair in the array is good.

**Example 3:**
- Input: nums = [1,2,3]
- Output: 0

**Constraints:**
- 1 <= nums.length <= 100
- 1 <= nums[i] <= 100

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

