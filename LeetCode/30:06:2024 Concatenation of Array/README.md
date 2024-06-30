# Concatenation of Array

## Problem Statement

Given an integer array `nums` of length `n`, you want to create an array `ans` of length `2n` where `ans[i] == nums[i]` and `ans[i + n] == nums[i]` for `0 <= i < n` (0-indexed).

Specifically, `ans` is the concatenation of two `nums` arrays.

Return the array `ans`.

## Examples

**Example 1:**

**Input:**
nums = [1, 2, 1]

**Output:**
[1, 2, 1, 1, 2, 1]

**Explanation:**
- The array `ans` is formed as follows:
  - `ans = [nums[0], nums[1], nums[2], nums[0], nums[1], nums[2]]`
  - `ans = [1, 2, 1, 1, 2, 1]`

**Example 2:**

**Input:**
nums = [1, 3, 2, 1]

**Output:**
[1, 3, 2, 1, 1, 3, 2, 1]


**Explanation:**
- The array `ans` is formed as follows:
  - `ans = [nums[0], nums[1], nums[2], nums[3], nums[0], nums[1], nums[2], nums[3]]`
  - `ans = [1, 3, 2, 1, 1, 3, 2, 1]`

## Constraints

- `n == nums.length`
- `1 <= n <= 1000`
- `1 <= nums[i] <= 1000`

## Approach

1. **Initialize the Result Array:** Create an array `ans` of length `2n`.
2. **Fill the Result Array:** Iterate through the array `nums` and fill `ans` such that:
   - `ans[i] = nums[i]`
   - `ans[i + n] = nums[i]`
3. **Return the Result Array:** After populating `ans`, return it.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp