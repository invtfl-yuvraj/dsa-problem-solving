# Find the Closest Number

## Problem Statement

Given a sorted array `arr[]` of positive integers, the task is to find the closest value in the array to the given number `k`. The array may contain duplicate values.

Note: If the difference with `k` is the same for two values in the array, return the greater value.

## Examples

### Example 1:
**Input:**
n = 4
k = 4
arr = [1, 3, 6, 7]

**Output:**
3

**Explanation:**
We have array arr = [1, 3, 6, 7] and target is 4. If we look at the absolute difference of target with every element of the array, we get { |1-4|, |3-4|, |6-4|, |7-4| } = {3, 1, 2, 3}. So, the closest number is 3.

### Example 2:
**Input:**
n = 7
k = 4
arr = [1, 2, 3, 5, 6, 8, 9]

**Output:**
5

**Explanation:**
The absolute difference of 4 is 1 from both 3 and 5. According to the question, we have to return the greater value, which is 5.


## Constraints:
- \(1 \leq n \leq 10^6\)
- \(1 \leq k \leq 10^9\)
- \(1 \leq arr[i] \leq 10^9\)

## Expected Time Complexity:
- O(log(n))

## Expected Auxiliary Space:
- O(1)

## Approach

To solve this problem efficiently, we can use a binary search approach due to the sorted nature of the array. Here are the steps:

1. **Binary Search Initialization**: Initialize `low` to 0 and `high` to `n-1`.
2. **Binary Search Execution**:
   - Calculate `mid`.
   - If `arr[mid]` is exactly equal to `k`, return `arr[mid]`.
   - Adjust `low` and `high` based on whether `arr[mid]` is less than or greater than `k`.
3. **Post-Processing**:
   - After exiting the binary search loop, `low` and `high` will indicate the closest bounds.
   - Compare `arr[low]` and `arr[high]` (if within bounds) to determine the closest value.
   - Ensure to handle the condition where the difference is the same by returning the greater value.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the convertToZigZag() function in your C++ code.
2. Call the convertToZigZag() function with the array arr as input to convert the array into a zig-zag fashion.
