# Left and Right Sum Differences

## Problem Statement

Given a 0-indexed integer array `nums`, find a 0-indexed integer array `answer` where:

`answer.length == nums.length`.  
`answer[i] = |leftSum[i] - rightSum[i]|`.

Where:

- `leftSum[i]` is the sum of elements to the left of the index `i` in the array `nums`. If there is no such element, `leftSum[i] = 0`.
- `rightSum[i]` is the sum of elements to the right of the index `i` in the array `nums`. If there is no such element, `rightSum[i] = 0`.

Return the array `answer`.

## Examples

**Example 1:**

**Input:**
nums = [10, 4, 8, 3]

**Output:**
[15, 1, 11, 22]

**Explanation:**
The array `leftSum` is [0, 10, 14, 22] and the array `rightSum` is [15, 11, 3, 0].  
The array `answer` is [|0 - 15|, |10 - 11|, |14 - 3|, |22 - 0|] = [15, 1, 11, 22].

**Example 2:**

**Input:**
nums = [1]

**Output:**
[0]

**Explanation:**
The array `leftSum` is [0] and the array `rightSum` is [0].  
The array `answer` is [|0 - 0|] = [0].

## Constraints

- `1 <= nums.length <= 1000`
- `1 <= nums[i] <= 10^5`

## Expected Time Complexity

- O(n)

## Expected Auxiliary Space

- O(n)

## Approach

1. Compute the prefix sum array `leftSum` where `leftSum[i]` is the sum of elements to the left of index `i`.
2. Compute the suffix sum array `rightSum` where `rightSum[i]` is the sum of elements to the right of index `i`.
3. Compute the result for each index `i` as `|leftSum[i] - rightSum[i]|`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp