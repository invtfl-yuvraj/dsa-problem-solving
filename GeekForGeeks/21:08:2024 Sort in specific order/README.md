# Sort in Specific Order

## Problem Statement

Given an array `arr[]` of positive integers, the task is to sort them such that:
1. The first part of the array contains odd numbers sorted in descending order.
2. The rest of the array contains even numbers sorted in ascending order.

## Examples

### Example 1:
**Input:**  
`arr[] = [1, 2, 3, 5, 4, 7, 10]`

**Output:**  
`[7, 5, 3, 1, 2, 4, 10]`

**Explanation:**  
The odd numbers `[7, 5, 3, 1]` are sorted in descending order and the even numbers `[2, 4, 10]` are sorted in ascending order.

### Example 2:
**Input:**  
`arr[] = [0, 4, 5, 3, 7, 2, 1]`

**Output:**  
`[7, 5, 3, 1, 0, 2, 4]`

**Explanation:**  
The odd numbers `[7, 5, 3, 1]` are sorted in descending order and the even numbers `[0, 2, 4]` are sorted in ascending order.

## Constraints

- `1 ≤ arr.size() ≤ 10^5`
- `0 ≤ arr[i] ≤ 10^18`

## Expected Time Complexity
- `O(nlog(n))`

## Expected Auxiliary Space
- `O(1)`

## Approach

The task can be approached by:
1. Separating the array into two subarrays: one for odd numbers and one for even numbers.
2. Sorting the odd numbers in descending order.
3. Sorting the even numbers in ascending order.
4. Concatenating the sorted odd and even arrays.

### Steps:
1. Iterate through the array and split the numbers into two lists: `odds` and `evens`.
2. Sort `odds` in descending order.
3. Sort `evens` in ascending order.
4. Concatenate `odds` and `evens` to get the desired output.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp