# Row with Max 1s

## Problem Statement

Given a boolean 2D array, consisting of only 1's and 0's, where each row is sorted, return the 0-based index of the first row that has the most number of 1s. If no such row exists, return -1.

## Examples

**Example 1:**

**Input:**  
arr = [[0, 1, 1, 1],  
       [0, 0, 1, 1],  
       [1, 1, 1, 1],  
       [0, 0, 0, 0]]

**Output:**  
2

**Explanation:**  
Row 2 contains 4 1's (0-based indexing).

**Example 2:**

**Input:**  
arr = [[0, 0],  
       [1, 1]]

**Output:**  
1

**Explanation:**  
Row 1 contains 2 1's (0-based indexing).

## Constraints

- `1 ≤ number of rows, number of columns ≤ 10^3`
- `0 ≤ arr[i][j] ≤ 1`

## Expected Time Complexity

- O(n + m)

## Expected Auxiliary Space

- O(1)

## Approach

1. Start from the top-right corner of the matrix.
2. If the current element is 1, move left (this row has at least as many 1s as the previous maximum).
3. If the current element is 0, move down (the rows below might have more 1s).
4. Keep track of the row with the maximum number of 1s encountered.
5. Return the index of the row with the most 1s.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp