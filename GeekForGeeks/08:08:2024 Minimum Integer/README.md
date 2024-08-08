# Minimum Integer

## Problem Statement

You are given an array `A` of size `N`. Let us denote `S` as the sum of all integers present in the array. Among all integers present in the array, find the minimum integer `X` such that `S ≤ N * X`.

## Examples

**Example 1:**

**Input:**  
N = 3,  
A = { 1, 3, 2 }

**Output:**  
2

**Explanation:**  
Sum of integers in the array is 6. Since `6 ≤ 3 * 2`, therefore 2 is the answer.

**Example 2:**

**Input:**  
N = 1,  
A = { 3 }

**Output:**  
3

**Explanation:**  
3 is the only possible answer.

## Constraints

- `1 ≤ N ≤ 10^5`
- `1 ≤ Ai ≤ 10^9`

## Expected Time Complexity

- O(N)

## Expected Auxiliary Space

- O(1)

## Approach

To find the minimum integer `X` such that `S ≤ N * X`, we can derive `X` as `X ≥ S / N`. Since `X` must be an integer and must satisfy the condition for all elements in the array, we will also check `X` against the maximum element in the array to ensure it meets the condition. The minimum `X` will be the maximum of `ceil(S / N)` and the maximum element in the array.

The formula for `ceil(S / N)` can be rewritten using integer division as `(S + N - 1) / N`.

However, since the goal is to find the smallest possible `X` that satisfies `S ≤ N * X`, it suffices to find the minimum element in `A` that satisfies the condition without directly calculating `ceil(S / N)`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp