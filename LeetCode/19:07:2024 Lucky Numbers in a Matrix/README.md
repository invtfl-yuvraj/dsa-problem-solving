# Lucky Numbers in a Matrix

## Problem Statement

Given an \( m \times n \) matrix of distinct numbers, return all lucky numbers in the matrix in any order.

A lucky number is an element of the matrix such that it is the minimum element in its row and the maximum in its column.

## Examples

### Example 1:
**Input:**
matrix = [[3,7,8],[9,11,13],[15,16,17]]

**Output:**
[15]

**Explanation:**
15 is the only lucky number since it is the minimum in its row and the maximum in its column.

### Example 2:
**Input:**
matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]

**Output:**
[12]

**Explanation:**
12 is the only lucky number since it is the minimum in its row and the maximum in its column.

### Example 3:
**Input:**
matrix = [[7,8],[1,2]]

**Output:**
[7]

**Explanation:**
7 is the only lucky number since it is the minimum in its row and the maximum in its column.

## Constraints:

- \( m == \text{mat.length} \)
- \( n == \text{mat[i].length} \)
- \( 1 \leq n, m \leq 50 \)
- \( 1 \leq \text{matrix[i][j]} \leq 10^5 \)
- All elements in the matrix are distinct.

## Approach

To solve this problem, we need to:
1. Find the minimum element in each row.
2. Check if that minimum element is also the maximum in its column.

### Steps:

1. Iterate through each row to find the minimum element and its column index.
2. For each minimum element found, check if it is the maximum element in its column.
3. If it is, add it to the list of lucky numbers.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp