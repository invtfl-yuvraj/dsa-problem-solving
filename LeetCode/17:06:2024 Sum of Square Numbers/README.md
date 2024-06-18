# Sum of Square Numbers

## Problem Statement
Given a non-negative integer `c`, decide whether there are two integers `a` and `b` such that `a^2 + b^2 = c`.

## Examples

**Example 1:**
**Input:**
c = 5
**Output:**
true
**Explanation:**
1 * 1 + 2 * 2 = 5

**Example 2:**
**Input:**
c = 3
**Output:**
false

## Constraints
- 0 <= c <= 2^31 - 1

## Approach
1. **Two Pointers Technique**: 
    - Initialize two pointers, `a` starting at 0 and `b` starting at the integer square root of `c`.
    - Use the equation `a^2 + b^2` to check if it equals `c`.
    - If `a^2 + b^2` is less than `c`, increment `a`.
    - If `a^2 + b^2` is greater than `c`, decrement `b`.
    - If `a^2 + b^2` equals `c`, return `true`.
    - If the pointers cross each other without finding a valid pair, return `false`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp