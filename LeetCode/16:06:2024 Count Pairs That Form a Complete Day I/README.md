# Count Pairs That Form a Complete Day I

## Problem Statement
Given an integer array `hours` representing times in hours, return an integer denoting the number of pairs (i, j) where `i < j` and `hours[i] + hours[j]` forms a complete day.

A complete day is defined as a time duration that is an exact multiple of 24 hours.

## Examples

**Example 1:**
**Input:**
hours = [12, 12, 30, 24, 24]
**Output:**
2
**Explanation:**
The pairs of indices that form a complete day are (0, 1) and (3, 4).

**Example 2:**
**Input:**
hours = [72, 48, 24, 3]
**Output:**
3
**Explanation:**
The pairs of indices that form a complete day are (0, 1), (0, 2), and (1, 2).

## Constraints
- 1 <= hours.length <= 100
- 1 <= hours[i] <= 10^9

## Expected Time Complexity
- O(n^2)

## Expected Auxiliary Space
- O(1)

## Approach
1. **Iterate through Pairs**: Use two nested loops to check all possible pairs (i, j) where `i < j`.
2. **Check for Complete Day**: For each pair, check if the sum of the two elements is a multiple of 24.
3. **Count Valid Pairs**: Increment the count for each valid pair found.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp