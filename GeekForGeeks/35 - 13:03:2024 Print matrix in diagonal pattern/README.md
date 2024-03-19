# Print Matrix in Diagonal Pattern

## Problem Statement

Given a square matrix `mat[][]` of `n*n` size, the task is to determine the diagonal pattern which is a linear arrangement of the elements of the matrix.

### Example 1:

**Input:**  
n = 3
mat[][] = {{1, 2, 3},
{4, 5, 6},
{7, 8, 9}}


**Output:**  
{1, 2, 4, 7, 5, 3, 6, 8, 9}

**Explanation:**  
Starting from (0, 0): 1,  
Move to the right to (0, 1): 2,  
Move diagonally down to (1, 0): 4,  
Move diagonally down to (2, 0): 7,  
Move diagonally up to (1, 1): 5,  
Move diagonally up to (0, 2): 3,  
Move to the right to (1, 2): 6,  
Move diagonally up to (2, 1): 8,  
Move diagonally up to (2, 2): 9  

Therefore, the output is {1, 2, 4, 7, 5, 3, 6, 8, 9}.

### Example 2:

**Input:**  
n = 2
mat[][] = {{1, 2},
{3, 4}}


**Output:**  
{1, 2, 3, 4}

**Explanation:**  
Starting from (0, 0): 1,  
Move to the right to (0, 1): 2,  
Move diagonally down to (1, 0): 3,  
Move to the right to (1, 1): 4  

Therefore, the output is {1, 2, 3, 4}.

### Constraints:

- 1 <= n <= 100
- -100 <= elements of matrix <= 100

## Approach

To solve this problem, we can traverse the matrix diagonally starting from the top-left corner and alternate between moving to the right and moving diagonally down until all elements are covered.

## Implementation

The solution to this problem can be implemented in the `matrixDiagonally()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `matrixDiagonally()` function in your Python code.
3. Call the `matrixDiagonally()` function with the matrix as input to get the diagonal pattern.


