# Three Consecutive Odds

## Problem Statement

Given an integer array `arr`, return `true` if there are three consecutive odd numbers in the array. Otherwise, return `false`.

## Examples

**Example 1:**

**Input:**
arr = [2, 6, 4, 1]

**Output:**
false

**Explanation:**
There are no three consecutive odd numbers.

**Example 2:**

**Input:**
arr = [1, 2, 34, 3, 4, 5, 7, 23, 12]

**Output:**
true


**Explanation:**
[5, 7, 23] are three consecutive odd numbers.

## Constraints

- \( 1 \leq arr.length \leq 1000 \)
- \( 1 \leq arr[i] \leq 1000 \)

## Approach

1. **Iterate Through the Array:** Loop through the array and check for three consecutive odd numbers.
2. **Check for Odd Numbers:** For each element, check if it and the next two elements are odd.
3. **Return the Result:** If found, return `true`. If the loop ends without finding such a sequence, return `false`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp