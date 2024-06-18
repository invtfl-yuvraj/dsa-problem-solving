# Minimum Changes to Make All Substrings Distinct

## Problem Statement
Given a string `s` consisting only of lowercase alphabets, find the minimum number of changes required to it so that all substrings of the string become distinct.

**Note:** The length of the string is at most 26.

## Examples

**Example 1:**
**Input:**
S = "aab"
**Output:**
1
**Explanation:**
If we change one instance of 'a' to any character from 'c' to 'z', we get all distinct substrings.

**Example 2:**
**Input:**
S = "ab"
**Output:**
0
**Explanation:**
As no change is required hence 0.

## Constraints
- 1 ≤ |S| ≤ 26

## Expected Time Complexity
- O(|S|)

## Expected Auxiliary Space
- O(26)

## Approach
1. **Count Frequency**: Use an array to count the frequency of each character in the string.
2. **Check for Duplicates**: Identify characters that have a frequency greater than 1.
3. **Calculate Changes**: Calculate the minimum changes needed by transforming duplicates to other characters not already present in the string.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp