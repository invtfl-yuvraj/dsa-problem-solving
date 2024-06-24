# Minimum Operations to Make Binary Array Elements Equal to One II

## Problem Statement

You are given a binary array `nums`.

You can do the following operation on the array any number of times (possibly zero):

Choose any 3 consecutive elements from the array and flip all of them. Flipping an element means changing its value from 0 to 1, and from 1 to 0.

Return the minimum number of operations required to make all elements in `nums` equal to 1. If it is impossible, return -1.

## Examples

**Example 1:**

**Input:**
nums = [0, 1, 1, 1, 0, 0]

**Output:**
3

**Explanation:**
- Choose the elements at indices 0, 1, and 2. The resulting array is `nums = [1, 0, 0, 1, 0, 0]`.
- Choose the elements at indices 1, 2, and 3. The resulting array is `nums = [1, 1, 1, 0, 0, 0]`.
- Choose the elements at indices 3, 4, and 5. The resulting array is `nums = [1, 1, 1, 1, 1, 1]`.

**Example 2:**

**Input:**
nums = [0, 1, 1, 1]

**Output:**
-1


**Explanation:**
It is impossible to make all elements equal to 1.

## Constraints

- `3 <= nums.length <= 10^5`
- `0 <= nums[i] <= 1`

## Approach

To solve this problem:
1. Iterate through the array to find segments of three consecutive elements.
2. If the first element of the segment is 0, flip the segment.
3. Continue until all elements are checked.
4. If any 0s are left, return -1 as it's impossible to make all elements 1.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
