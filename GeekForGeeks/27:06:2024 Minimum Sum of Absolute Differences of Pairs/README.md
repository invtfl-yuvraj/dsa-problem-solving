# Minimum Sum of Absolute Differences of Pairs

## Problem Statement

You are given two arrays A and B of equal length N. Your task is to pair each element of array A to an element in array B, such that the sum of the absolute differences of all the pairs is minimum.

## Examples

**Example 1:**

**Input:**
N = 4
A = [4, 1, 8, 7]
B = [2, 3, 6, 5]

**Output:**
6


**Explanation:**
If we take the pairings as (1,2), (4,3), (7,5), and (8,6), the sum will be:
\[ |1 - 2| + |4 - 3| + |7 - 5| + |8 - 6| = 6 \]
It can be shown that this is the minimum sum we can get.

**Example 2:**

**Input:**
N = 3
A = [4, 1, 2]
B = [2, 4, 1]

**Output:**
0


**Explanation:**
If we take the pairings as (4,4), (1,1), and (2,2), the sum will be:
\[ |4 - 4| + |1 - 1| + |2 - 2| = 0 \]
It can be shown that this is the minimum sum we can get.

## Constraints

- \( 1 \leq N \leq 10^5 \)
- \( 0 \leq A[i], B[i] \leq 10^9 \)
- Sum of N over all test cases doesn't exceed \( 10^6 \)

## Approach

1. **Sort Arrays:** Sort both arrays A and B.
2. **Calculate Minimum Sum:**
   - Pair elements A[i] and B[i] after sorting.
   - Compute the absolute difference for each pair and accumulate the sum.

The sorting step ensures that we can efficiently find optimal pairings by maintaining order and minimizing the absolute differences. This approach runs efficiently in \( O(N \log N) \) time complexity due to sorting.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp