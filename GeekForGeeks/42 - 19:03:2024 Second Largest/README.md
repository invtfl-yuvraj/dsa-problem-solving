# Second Largest

## Problem Statement

Given an array `Arr` of size `N`, find and return the second largest distinct element from the array. If the second largest element doesn't exist, return `-1`.

### Example 1:

**Input:**  
`N = 6`  
`Arr[] = {12, 35, 1, 10, 34, 1}`

**Output:**  
`34`

**Explanation:**  
The largest element of the array is `35` and the second largest element is `34`.

### Example 2:

**Input:**  
`N = 3`  
`Arr[] = {10, 5, 10}`

**Output:**  
`5`

**Explanation:**  
The largest element of the array is `10` and the second largest element is `5`.

## Constraints

- `2 <= N <= 10^5`
- `1 <= Arr[i] <= 10^5`

## Approach

To find the second largest distinct element from the array:

1. Initialize two variables `largest` and `second_largest` to keep track of the largest and second largest distinct elements in the array. Set them to `-1`.

2. Iterate through the array `Arr`.

    - If the current element is greater than `largest`, update `second_largest` to `largest` and update `largest` to the current element.
    - If the current element is not equal to `largest` but is greater than `second_largest`, update `second_largest` to the current element.

3. Return `second_largest` as the result. If `second_largest` remains `-1`, it means there is no second largest distinct element in the array.

## Implementation

The solution to this problem can be implemented in the `print2largest()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `print2largest()` function in your Python code.
3. Call the `print2largest()` function with the array of integers `Arr` and its length `N` as inputs to find the second largest distinct element.


