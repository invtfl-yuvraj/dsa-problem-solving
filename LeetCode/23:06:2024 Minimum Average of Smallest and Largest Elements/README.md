# Minimum Average of Smallest and Largest Elements

## Problem Statement

You have an array of floating point numbers `averages` which is initially empty. You are given an array `nums` of `n` integers where `n` is even.

You repeat the following procedure `n / 2` times:
- Remove the smallest element `minElement` and the largest element `maxElement` from `nums`.
- Add `(minElement + maxElement) / 2` to `averages`.

Return the minimum element in `averages`.

## Examples

**Example 1:**

**Input:**
nums = [7, 8, 3, 4, 15, 13, 4, 1]

**Output:**
5.5

**Explanation:**
Step nums averages
0 [7,8,3,4,15,13,4,1] []
1 [7,8,3,4,13,4] [8]
2 [7,8,4,4] [8,8]
3 [7,4] [8,8,6]
4 [] [8,8,6,5.5]
The smallest element of averages, 5.5, is returned.

**Example 2:**

**Input:**
nums = [1, 9, 8, 3, 10, 5]

**Output:**
5.5

**Explanation:**
Step nums averages
0 [1,9,8,3,10,5] []
1 [9,8,3,5] [5.5]
2 [8,5] [5.5,6]
3 [] [5.5,6,6.5]
The smallest element of averages, 5.5, is returned.


**Example 3:**

**Input:**
nums = [1, 2, 3, 7, 8, 9]

**Output:**
5.0

**Explanation:**
Step nums averages
0 [1,2,3,7,8,9] []
1 [2,3,7,8] [5]
2 [3,7] [5,5]
3 [] [5,5,5]
The smallest element of averages, 5, is returned.


## Constraints

- `2 <= n == nums.length <= 50`
- `n` is even.
- `1 <= nums[i] <= 50`

## Approach

1. Sort the array `nums`.
2. Use two pointers: one starting at the beginning (smallest elements) and one at the end (largest elements).
3. For each pair of smallest and largest elements, compute their average and add it to the `averages` list.
4. Continue until all pairs are processed.
5. Return the minimum value from the `averages` list.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
