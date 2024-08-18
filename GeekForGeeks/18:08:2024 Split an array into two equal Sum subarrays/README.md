# Split an Array into Two Equal Sum Subarrays

## Problem Statement

Given an array of integers `arr`, return `true` if it is possible to split it into two subarrays (without reordering the elements) such that the sum of the two subarrays is equal. If it is not possible, return `false`.

## Examples

### Example 1:
**Input:**  
`arr = [1, 2, 3, 4, 5, 5]`

**Output:**  
`true`

**Explanation:**  
We can divide the array into two subarrays `[1, 2, 3, 4]` and `[5, 5]`. The sum of both subarrays is `10`, so the answer is `true`.

### Example 2:
**Input:**  
`arr = [4, 3, 2, 1]`

**Output:**  
`false`

**Explanation:**  
We cannot divide the array into two subarrays with equal sums, so the answer is `false`.

## Constraints
- `1 <= arr.size() <= 10^5`
- `1 <= arr[i] <= 10^6`

## Expected Time Complexity
- `O(n)`

## Expected Space Complexity
- `O(1)`

## Approach

The idea is to keep track of the running sum of elements as we iterate through the array. If at any point, the running sum equals half of the total sum of the array, we can split the array at that point. If the total sum is odd, it's impossible to split the array into two equal halves, and we return `false`.

### Steps:
1. Calculate the total sum of the array.
2. If the total sum is odd, return `false` because it can't be split into two equal parts.
3. Iterate through the array and keep a running sum.
4. If at any point the running sum equals half of the total sum, return `true`.
5. If no such point is found, return `false`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp