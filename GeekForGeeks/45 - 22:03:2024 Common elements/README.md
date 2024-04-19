# Common Elements

## Problem Statement

Given three arrays `A`, `B`, and `C` sorted in increasing order, the task is to find the elements that are common in all three arrays.

### Example 1:

**Input:**  
`n1 = 6; A = {1, 5, 10, 20, 40, 80}`  
`n2 = 5; B = {6, 7, 20, 80, 100}`  
`n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}`

**Output:**  
`20 80`  

**Explanation:**  
`20` and `80` are the only common elements in `A`, `B`, and `C`.

## Constraints

- `1 <= n1, n2, n3 <= 10^5`
- The array elements can be both positive or negative integers.

## Approach

To find the elements that are common in all three arrays without using any additional data structure:

1. Initialize three pointers, `i`, `j`, and `k` at the start of arrays `A`, `B`, and `C` respectively.
2. Iterate through all arrays using the pointers. If the values at the pointers are the same, add the value to the list of common elements and increment all pointers.
3. If the values at the pointers are different, increment the pointer pointing to the smallest value.
4. Continue this process until one of the pointers reaches the end of its respective array.
5. Return the list of common elements found.

## Implementation

The solution to this problem can be implemented in the `commonElements()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `commonElements()` function in your Python code.
3. Call the `commonElements()` function with the three arrays `A[]`, `B[]`, and `C[]` and their respective lengths `n1`, `n2`, and `n3` as inputs to find the common elements.


