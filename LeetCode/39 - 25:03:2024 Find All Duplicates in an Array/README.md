# Find All Duplicates in an Array

## Problem Statement

Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appear twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

### Example 1:

**Input:**  
`nums = [4,3,2,7,8,2,3,1]`

**Output:**  
`[2,3]`

**Explanation:**  
In the given array, the integers 2 and 3 appear twice.

### Example 2:

**Input:**  
`nums = [1,1,2]`

**Output:**  
`[1]`

**Explanation:**  
In the given array, the integer 1 appears twice.

### Example 3:

**Input:**  
`nums = [1]`

**Output:**  
`[]`

**Explanation:**  
In the given array, no integer appears twice.

## Constraints:

- n == nums.length
- 1 <= n <= 10^5
- 1 <= nums[i] <= n
- Each element in nums appears once or twice.

## Approach

We can solve this problem in O(n) time and with constant extra space by using the array itself to mark the presence of integers. We iterate through the array and for each integer `num`, we mark the presence of `num` by setting `nums[num - 1]` to a negative value. After this process, the integers that appear twice will be those for which `nums[num - 1]` is already negative.

## Implementation

The solution to this problem can be implemented in the `findDuplicates()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `findDuplicates()` function in your Python code.
3. Call the `findDuplicates()` function with the array `nums` as input to find all integers that appear twice.


