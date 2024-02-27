# Plus One

## Overview

This repository contains a solution to the "Plus One" problem. The task is to increment a large integer, represented as an integer array of digits, by one.

## Problem Statement

You are given a large integer represented as an integer array `digits`, where each `digits[i]` is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

**Example 1:**
- Input: digits = [1,2,3]
- Output: [1,2,4]
- Explanation: The array represents the integer 123. Incrementing by one gives 123 + 1 = 124. Thus, the result should be [1,2,4].

**Example 2:**
- Input: digits = [4,3,2,1]
- Output: [4,3,2,2]
- Explanation: The array represents the integer 4321. Incrementing by one gives 4321 + 1 = 4322. Thus, the result should be [4,3,2,2].

**Example 3:**
- Input: digits = [9]
- Output: [1,0]
- Explanation: The array represents the integer 9. Incrementing by one gives 9 + 1 = 10. Thus, the result should be [1,0].

**Constraints:**
- 1 <= digits.length <= 100
- 0 <= digits[i] <= 9
- `digits` does not contain any leading 0's.

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

