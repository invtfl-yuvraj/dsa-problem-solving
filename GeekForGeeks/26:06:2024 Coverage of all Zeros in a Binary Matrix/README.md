# Coverage of all Zeros in a Binary Matrix

## Problem Statement

Given a binary matrix containing 0s and 1s only, we need to find the sum of coverage of all zeros in the matrix. Coverage for a particular 0 is defined as the total number of ones around that zero in the left, right, up, and bottom directions.

## Examples

**Example 1:**

**Input:**
matrix = [[0, 1, 0],
[0, 1, 1],
[0, 0, 0]]

**Output:**
6

**Explanation:**
There are a total of 6 ones around all zeros.

**Example 2:**

**Input:**
matrix = [[0, 1]]

**Output:**
1

**Explanation:**
There is only 1 one around the single zero.

## Constraints

- `1 <= matrix.size, matrix[0].size <= 100`

## Expected Time Complexity

- O(n * m)

## Expected Space Complexity

- O(1)

## Approach

1. Initialize a variable to keep track of the total coverage.
2. Iterate through each element of the matrix.
3. For each zero, check its adjacent cells (left, right, up, and bottom).
4. Count the number of ones around the zero and add it to the total coverage.
5. Return the total coverage.

## Steps

1. Initialize `total_coverage` to 0.
2. Loop through each element in the matrix using nested loops.
3. If the current element is zero, check its neighbors:
   - Check the element to the left (if it exists).
   - Check the element to the right (if it exists).
   - Check the element above (if it exists).
   - Check the element below (if it exists).
4. Increment the `total_coverage` for each one found around the zero.
5. Return the `total_coverage`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp