# Minimum Number

## Problem Statement

You are given an array `arr` of `n` elements. In one operation, you can pick two indices `i` and `j`, such that `arr[i] >= arr[j]` and replace the value of `arr[i]` with `(arr[i] - arr[j])`. You have to minimize the values of the array after performing any number of such operations.

## Examples

### Example 1:

**Input:**
n = 3
arr = [3, 2, 4]

**Output:**
1

**Explanation:**
1st Operation: Pick 4 & 3, subtract 4-3 => [3, 2, 1]
2nd Operation: Pick 3 & 2, subtract 3-2 => [1, 2, 1]
3rd Operation: Pick 1 & 2, subtract 2-1 => [1, 1, 1]
4th Operation: Pick 1 & 1, subtract 1-1 => [1, 0, 1]
5th Operation: Pick 1 & 1, subtract 1-1 => [0, 0, 1]
After this, no operation can be performed, so the maximum number left in the array is 1.


### Example 2:

**Input:**
n = 2
arr = [2, 4]

**Output:**
2

**Explanation:**
1st Operation: Pick 4 & 2, subtract 4-2 => [2, 2]
2nd Operation: Pick 2 & 2, subtract 2-2 => [0, 2]
After this, no operation can be performed, so the maximum number left in the array is 2.


## Approach

To solve this problem, we need to consider the mathematical properties of the operations allowed. Specifically, the greatest common divisor (GCD) of the array elements is invariant under the allowed operations. Therefore, the minimum number left in the array after performing any number of operations will be the GCD of all elements in the array.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the convertToZigZag() function in your C++ code.
2. Call the convertToZigZag() function with the array arr as input to convert the array into a zig-zag fashion.