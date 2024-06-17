# Count Pairs That Form a Complete Day II

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
- 1 <= hours.length <= 5 * 10^5
- 1 <= hours[i] <= 10^9

## Expected Time Complexity
- O(n)

## Expected Auxiliary Space
- O(1)

## Approach
1. **Modulo Operation**: Calculate `hours[i] % 24` for each element. This gives the remainder when the hours are divided by 24.
2. **Count Complements**: Use a frequency array to count occurrences of each remainder.
3. **Find Pairs**: For each remainder, check if its complement (i.e., `24 - remainder`) exists in the frequency array and count pairs accordingly.
4. **Edge Case**: Special handling for remainders that are exactly 0 since they need to be paired with themselves.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp