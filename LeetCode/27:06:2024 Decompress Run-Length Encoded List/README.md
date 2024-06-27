# Decompress Run-Length Encoded List

## Problem Statement

We are given a list `nums` of integers representing a list compressed with run-length encoding.

Consider each adjacent pair of elements `[freq, val] = [nums[2*i], nums[2*i+1]]` (with `i >= 0`). For each such pair, there are `freq` elements with value `val` concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.

Return the decompressed list.

## Examples

**Example 1:**

**Input:**
nums = [1, 2, 3, 4]

**Output:**
[2, 4, 4, 4]

**Explanation:**
- The first pair `[1, 2]` means we have `freq = 1` and `val = 2`, so we generate the array `[2]`.
- The second pair `[3, 4]` means we have `freq = 3` and `val = 4`, so we generate `[4, 4, 4]`.
- The concatenation of `[2]` and `[4, 4, 4]` is `[2, 4, 4, 4]`.

**Example 2:**

**Input:**
nums = [1, 1, 2, 3]

**Output:**
[1, 3, 3]


**Explanation:**
- The first pair `[1, 1]` means we have `freq = 1` and `val = 1`, so we generate the array `[1]`.
- The second pair `[2, 3]` means we have `freq = 2` and `val = 3`, so we generate `[3, 3]`.
- The concatenation of `[1]` and `[3, 3]` is `[1, 3, 3]`.

## Constraints

- `2 <= nums.length <= 100`
- `nums.length % 2 == 0`
- `1 <= nums[i] <= 100`

## Approach

1. Initialize an empty list to store the decompressed elements.
2. Iterate through the `nums` list in steps of 2 to get each `[freq, val]` pair.
3. For each pair, append `freq` number of `val` elements to the decompressed list.
4. Return the decompressed list.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp