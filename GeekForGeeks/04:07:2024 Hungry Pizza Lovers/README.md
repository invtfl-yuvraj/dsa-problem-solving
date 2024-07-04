# Hungry Pizza Lovers

## Problem Statement

Domino's Pizza has hungry customers waiting in the queue. Each unique order is placed by a customer at time `x[i]`, and the order takes `y[i]` units of time to complete. You have information on all `n` orders. Find the order in which all customers will receive their pizza and return it. If two or more orders are completed at the same time, then sort them by non-decreasing order number.

## Examples

**Example 1:**

**Input:**
arr[ ] = {{4,1}, {6,2}, {7,6}, {8,1}, {1,3}}


**Output:**
5 1 2 4 3

**Explanation:**
Here an array can be transformed to {5, 8, 13, 9, 4}. The 5th index order is received first, then the 1st order, 2nd order, etc. The result is {5, 1, 2, 4, 3}.

**Example 2:**

**Input:**
arr[ ] = {{1,1}, {1,1}, {1,1}}

**Output:**
1 2 3

## Constraints

- \(1 \leq N \leq 10^5\)
- \(1 \leq arr[i][0], arr[i][1] \leq 10^5\)

## Your Task

This is a function problem. The input is already taken care of by the driver code. You only need to complete the function `permute()` that takes a 2-d array `arr`, `sizeOfArray` (n), and returns the array of the order in which customers will receive their pizza. The driver code takes care of the printing.

## Expected Time Complexity

- O(N * LOG(N))

## Expected Auxiliary Space

- O(N)

## Approach

1. **Calculate Completion Time:**
   - For each order, calculate the completion time as the sum of the order time and the duration.
2. **Store Orders with Indices:**
   - Store each order with its index and completion time in a list.
3. **Sort Orders:**
   - Sort the orders based on the completion time. If two orders have the same completion time, sort by their original order index.
4. **Extract and Return Indices:**
   - Extract the indices of the sorted orders and return them as the result.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp