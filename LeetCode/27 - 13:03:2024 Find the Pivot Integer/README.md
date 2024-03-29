# Find the Pivot Integer

## Problem Statement

Given a positive integer `n`, find the pivot integer `x` such that:

The sum of all elements between 1 and `x` inclusively equals the sum of all elements between `x` and `n` inclusively.

Return the pivot integer `x`. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.

### Example 1:

**Input:**  
n = 8  

**Output:**  
6  

**Explanation:**  
6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.

### Example 2:

**Input:**  
n = 1  

**Output:**  
1  

**Explanation:**  
1 is the pivot integer since: 1 = 1.

### Example 3:

**Input:**  
n = 4  

**Output:**  
-1  

**Explanation:**  
It can be proved that no such integer exists.

## Constraints:

- 1 <= n <= 1000

## Approach

To solve this problem, we can use mathematical properties. The sum of the first `n` positive integers can be calculated using the formula `n * (n + 1) / 2`. We iterate through the integers from 1 to `n`, calculating the sum of integers from 1 to `x` and from `x` to `n` for each `x`. If we find an `x` such that the two sums are equal, we return `x`. If no such `x` is found, we return -1.

## Implementation

The solution to this problem can be implemented in the `findPivotInteger()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `findPivotInteger()` function in your Python code.
3. Call the `findPivotInteger()` function with the integer `n` as input to get the pivot integer `x`.


