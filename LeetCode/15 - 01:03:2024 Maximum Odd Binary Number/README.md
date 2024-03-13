# Maximum Odd Binary Number

## Overview

This repository contains a solution to the "Maximum Odd Binary Number" problem. The task is to rearrange the bits in a binary string to create the maximum odd binary number.

## Problem Statement

You are given a binary string `s` that contains at least one '1'. You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination. Return a string representing the maximum odd binary number that can be created from the given combination.

**Example 1:**
- Input: s = "010"
- Output: "001"
- Explanation: Because there is just one '1', it must be in the last position. So the answer is "001".

**Example 2:**
- Input: s = "0101"
- Output: "1001"
- Explanation: One of the '1's must be in the last position. The maximum number that can be made with the remaining digits is "100". So the answer is "1001".

**Constraints:**
- 1 <= s.length <= 100
- s consists only of '0' and '1'.
- s contains at least one '1'.

## Your Task:

You are required to implement the function `maximumOddBinaryNumber()` that takes a binary string `s` as input and returns a string representing the maximum odd binary number that can be created from the given combination.

**Expected Time Complexity:** O(n)
**Expected Auxiliary Space:** O(1)

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.


