# Find Minimum Operations to Make All Elements Divisible by Three

## Problem Statement

You are given an integer array `nums`. In one operation, you can add or subtract 1 from any element of `nums`.

Return the minimum number of operations to make all elements of `nums` divisible by 3.

## Examples

**Example 1:**

**Input:**
nums = [1, 2, 3, 4]

**Output:**
3

**Explanation:**
- Subtract 1 from 1.
- Add 1 to 2.
- Subtract 1 from 4.

**Example 2:**

**Input:**
nums = [3, 6, 9]

**Output:**
0


**Explanation:**
All elements are already divisible by 3.

## Constraints

- 1 <= nums.length <= 50
- 1 <= nums[i] <= 50

## Approach

To solve this problem:
- Iterate through each element in the array `nums`.
- For each element, check the remainder when divided by 3.
- If the remainder is 0, the element is already divisible by 3 and requires no operations.
- If the remainder is 1, we need 1 operation to make it divisible by 3 (either add 2 or subtract 1).
- If the remainder is 2, we also need 1 operation to make it divisible by 3 (either add 1 or subtract 2).

Sum up all the operations required for each element.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
