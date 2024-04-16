# Move all Negative Elements to End

## Problem Statement

Given an unsorted array `arr[]` of size `n` having both negative and positive integers, the task is to place all negative elements at the end of the array without changing the order of positive and negative elements.

### Example 1:

**Input:**  
`n = 8`  
`arr[] = {1, -1, 3, 2, -7, -5, 11, 6}`

**Output:**  
`1 3 2 11 6 -1 -7 -5`

### Example 2:

**Input:**  
`n = 8`  
`arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}`

**Output:**  
`7 9 10 11 -5 -3 -4 -1`

## Constraints

- `1 ≤ n ≤ 10^6`
- `-10^9 ≤ arr[i] ≤ 10^9`

## Approach

To move all negative elements to the end of the array without changing the order of positive and negative elements, follow these steps:

1. Initialize an empty list to hold all positive integers and another list to hold all negative integers.
2. Iterate through the array and separate the elements into the two lists based on their sign.
3. Concatenate the list of positive integers and the list of negative integers.
4. Copy the concatenated list back into the original array.

This approach maintains the order of positive and negative integers and moves all negative elements to the end of the array.

## Implementation

The solution to this problem can be implemented in the `segregateElements()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `segregateElements()` function in your Python code.
3. Call the `segregateElements()` function with the array `arr[]` and its length `n` as inputs to move all negative elements to the end of the array.


