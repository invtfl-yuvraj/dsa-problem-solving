# Find the Duplicate Number

## Problem Statement

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and use only constant extra space.

### Example 1:

**Input:**  
`nums = [1,3,4,2,2]`

**Output:**  
`2`

**Explanation:**  
The repeated number is 2.

### Example 2:

**Input:**  
`nums = [3,1,3,4,2]`

**Output:**  
`3`

**Explanation:**  
The repeated number is 3.

### Example 3:

**Input:**  
`nums = [3,3,3,3,3]`

**Output:**  
`3`

**Explanation:**  
The repeated number is 3.

## Constraints:

- 1 <= n <= 10^5
- nums.length == n + 1
- 1 <= nums[i] <= n
- All the integers in nums appear only once except for precisely one integer which appears two or more times.

## Approach

To find the duplicate number without modifying the original array and using only constant extra space, we can use Floyd's Tortoise and Hare algorithm.

1. Initialize two pointers, slow and fast, both starting at the first element of the array.
2. Move slow one step at a time and fast two steps at a time until they meet.
3. When they meet, reset one pointer to the first element and move them at the same pace (one step at a time) until they meet again. The meeting point will be the duplicate number.

## Implementation

The solution to this problem can be implemented in the `findDuplicate()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `findDuplicate()` function in your Python code.
3. Call the `findDuplicate()` function with the array `nums` as input to find the duplicate number.


