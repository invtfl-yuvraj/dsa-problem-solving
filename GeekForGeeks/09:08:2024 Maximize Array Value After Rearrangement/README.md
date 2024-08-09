# Maximize Array Value After Rearrangement

## Problem Statement

Given an array `arr` of `n` integers, your task is to find the maximum value of `∑arr[i]*i`, where `i = 0, 1, 2, ..., n-1`. You are allowed to rearrange the elements of the array. Since the output could be large, return the answer modulo `10^9 + 7`.

## Examples

**Example 1:**

**Input:**  
arr = [5, 3, 2, 4, 1]

**Output:**  
40

**Explanation:**  
If we arrange the array as `[1, 2, 3, 4, 5]` then we can see that the minimum index will multiply with the minimum number and the maximum index will multiply with the maximum number. So, `1*0 + 2*1 + 3*2 + 4*3 + 5*4 = 0 + 2 + 6 + 12 + 20 = 40`.

**Example 2:**

**Input:**  
arr = [1, 2, 3]

**Output:**  
8

**Explanation:**  
If we arrange the array as `[1, 2, 3]`, then `1*0 + 2*1 + 3*2 = 0 + 2 + 6 = 8`.

## Constraints

- `1 ≤ arr.size ≤ 10^5`
- `1 ≤ arr[i] ≤ 10^5`

## Expected Time Complexity

- `O(nlog(n))`

## Expected Auxiliary Space

- `O(1)`

## Approach

To maximize the value of `∑arr[i]*i`, we should place the smallest elements of the array at the lower indices and the largest elements at the higher indices. This can be achieved by sorting the array in non-decreasing order and then calculating the sum of products of the array elements with their respective indices.

The final result should be taken modulo `10^9 + 7` to handle large numbers.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp