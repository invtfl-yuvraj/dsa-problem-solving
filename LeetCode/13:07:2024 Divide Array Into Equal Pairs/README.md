# Divide Array Into Equal Pairs

## Problem Statement

You are given an integer array `nums` consisting of `2 * n` integers.

You need to divide `nums` into `n` pairs such that:
- Each element belongs to exactly one pair.
- The elements present in a pair are equal.

Return `true` if `nums` can be divided into `n` pairs, otherwise return `false`.

## Examples

### Example 1:

**Input:**
nums = [3, 2, 3, 2, 2, 2]

**Output:**
true

**Explanation:**
There are 6 elements in nums, so they should be divided into 6 / 2 = 3 pairs.
If nums is divided into the pairs (2, 2), (3, 3), and (2, 2), it will satisfy all the conditions.


### Example 2:

**Input:**
nums = [1, 2, 3, 4]

**Output:**
false

**Explanation:**
There is no way to divide nums into 4 / 2 = 2 pairs such that the pairs satisfy every condition.


## Approach

To solve this problem, we can use a dictionary to count the occurrences of each element in the array. For the array to be divided into pairs of equal elements, each element's count must be even. If any element's count is odd, it means it's not possible to divide the array into the required pairs.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp