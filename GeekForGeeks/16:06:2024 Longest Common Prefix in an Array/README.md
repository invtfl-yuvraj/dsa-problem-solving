# Longest Common Prefix in an Array

## Problem Statement
Given an array of N strings, find the longest common prefix among all strings present in the array.

## Examples

**Example 1:**
**Input:**
N = 4
arr[] = {"geeksforgeeks", "geeks", "geek", "geezer"}
**Output:**
gee
**Explanation:**
"gee" is the longest common prefix in all the given strings.

**Example 2:**
**Input:**
N = 2
arr[] = {"hello", "world"}
**Output:**
-1
**Explanation:**
There's no common prefix in the given strings.

## Constraints
- 1 ≤ N ≤ 10^3
- 1 ≤ |arri| ≤ 10^3

## Your Task
You don't need to read input or print anything. Your task is to complete the function `longestCommonPrefix()` which takes the string array `arr[]` and its size `N` as inputs and returns the longest common prefix common in all the strings in the array. If there's no prefix common in all the strings, return "-1".

## Expected Time Complexity
- O(N * min(|arri|))

## Expected Auxiliary Space
- O(min(|arri|)) for the result

## Approach
1. **Initial Prefix**: Start with the first string as the initial common prefix.
2. **Comparison**: Compare this prefix with each subsequent string, reducing the length of the prefix as needed.
3. **Update Prefix**: Update the common prefix based on comparisons.
4. **Return Result**: If the common prefix becomes empty, return "-1". Otherwise, return the common prefix.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp