# Minimum Length of String After Deleting Similar Ends

## Overview

This repository contains a solution to the "Minimum Length of String After Deleting Similar Ends" problem. The task is to apply a specific algorithm on a given string and return the minimum length of the string after performing the operation.

## Problem Statement

Given a string `s` consisting only of characters 'a', 'b', and 'c'. You are asked to apply the following algorithm on the string any number of times:

1. Pick a non-empty prefix from the string `s` where all the characters in the prefix are equal.
2. Pick a non-empty suffix from the string `s` where all the characters in this suffix are equal.
3. The prefix and the suffix should not intersect at any index.
4. The characters from the prefix and suffix must be the same.
5. Delete both the prefix and the suffix.

Return the minimum length of `s` after performing the above operation any number of times (possibly zero times).

**Example 1:**
- Input: s = "ca"
- Output: 2
- Explanation: You can't remove any characters, so the string stays as is.

**Example 2:**
- Input: s = "cabaabac"
- Output: 0
- Explanation: An optimal sequence of operations is:
  - Take prefix = "c" and suffix = "c" and remove them, s = "abaaba".
  - Take prefix = "a" and suffix = "a" and remove them, s = "baab".
  - Take prefix = "b" and suffix = "b" and remove them, s = "aa".
  - Take prefix = "a" and suffix = "a" and remove them, s = "".

**Example 3:**
- Input: s = "aabccabba"
- Output: 3
- Explanation: An optimal sequence of operations is:
  - Take prefix = "aa" and suffix = "a" and remove them, s = "bccabb".
  - Take prefix = "b" and suffix = "bb" and remove them, s = "cca".

**Constraints:**
- 1 <= s.length <= 105
- s only consists of characters 'a', 'b', and 'c'.

## Your Task:

You don't need to read input or print anything. Your task is to implement the function `minLengthAfterOperations()` which takes the string `s` as an input parameter and returns the minimum length of `s` after performing the specified operation.

**Expected Time Complexity:** O(n)
**Expected Auxiliary Space:** O(1)

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.

