# Search Pattern (Rabin-Karp Algorithm)

## Overview

This repository contains a solution to the "Search Pattern (Rabin-Karp Algorithm)" problem. The task is to find and print the indexes of all occurrences of a pattern string in a text string using the Rabin-Karp algorithm.

## Problem Statement

Given two strings, one is a text string and the other is a pattern string. The task is to print the indexes of all the occurrences of the pattern string in the text string. For printing, Starting Index of a string should be taken as 1. The strings will only contain lowercase English alphabets ('a' to 'z').

**Example 1:**
- Input:
  text = "birthdayboy"
  pattern = "birth"
- Output: 
  [1]
- Explanation: 
  The string "birth" occurs at index 1 in the text.

**Example 2:**
- Input:
  text = "geeksforgeeks"
  pattern = "geek"
- Output: 
  [1, 9]
- Explanation: 
  The string "geek" occurs twice in the text, once starting at index 1 and the other at index 9.

## Your Task:

You don't need to read input or print anything. Your task is to complete the function `search()` which takes the string `text` and the string `pattern` as input and returns an array denoting the start indices (1-based) of substring pattern in the string text. 

**Expected Time Complexity:** O(|text| + |pattern|).
**Expected Auxiliary Space:** O(1).

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.

