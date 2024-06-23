# Geek count

## Problem Statement

You are given a string `s` of lowercase letters. You have to count how many times "geek" is present in string `s` as a subsequence. The answer can be large, so return the answer modulo 10^9 + 7.

## Examples

**Example 1:**

**Input:**
s = "geeks"

**Output:**
1

**Explanation:**
In the string "geeks", "geek" appears as a subsequence exactly once. The characters at indices 0, 1, 2, and 3 form "geek".

**Example 2:**

**Input:**
s = "geeksforgeeks"

**Output:**
8


**Explanation:**
In the string "geeksforgeeks", there are 8 different ways to form "geek" as a subsequence. These ways correspond to picking characters from the following sets of indices:
- 0, 1, 2, 3
- 0, 1, 2, 11
- 0, 1, 9, 11
- 0, 1, 10, 11
- 0, 2, 9, 11
- 0, 2, 10, 11
- 0, 9, 10, 11
- 8, 9, 10, 11

## Constraints

- 1 <= length(s) <= 10^5
- s consists of lowercase Latin alphabets

## Approach

To solve this problem:
- Use dynamic programming to count the number of subsequences.
- Maintain a count for each character in "geek" and update the count as you iterate through the string `s`.
- Use modulo 10^9 + 7 to handle large numbers.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp