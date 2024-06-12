# Sort Colors

## Problem Statement

Given an array `nums` with `n` objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the colors red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

### Examples

**Example 1:**

Input:  
nums = [2,0,2,1,1,0]

Output:  
[0,0,1,1,2,2]


**Example 2:**

Input:  
nums = [2,0,1]

Output:  
[0,1,2]


## Constraints

- `n == nums.length`
- `1 <= n <= 300`
- `nums[i]` is either `0`, `1`, or `2`.

## Approach

To solve this problem, we can use the Dutch National Flag algorithm, which partitions the array into three sections: one for each color.

### Steps:

1. Initialize three pointers: `low`, `mid`, and `high`.
2. Iterate through the array with the `mid` pointer:
   - If `nums[mid] == 0`, swap `nums[low]` and `nums[mid]`, then increment both `low` and `mid`.
   - If `nums[mid] == 1`, increment `mid`.
   - If `nums[mid] == 2`, swap `nums[mid]` and `nums[high]`, then decrement `high`.
3. Continue the process until `mid` exceeds `high`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the sortColors() function in your C++ code.
2. Call the sortColors() function with the array nums as input to sort the array in-place.