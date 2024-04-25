# First Missing Positive

## Problem Statement

Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

### Example 1:

**Input:**  
`nums = [1,2,0]`

**Output:**  
`3`

**Explanation:**  
The numbers in the range [1,2] are all present in the array, so the smallest positive integer that is missing is 3.

### Example 2:

**Input:**  
`nums = [3,4,-1,1]`

**Output:**  
`2`

**Explanation:**  
1 is present in the array, so the smallest positive integer that is missing is 2.

### Example 3:

**Input:**  
`nums = [7,8,9,11,12]`

**Output:**  
`1`

**Explanation:**  
The smallest positive integer 1 is missing.

## Constraints:

- 1 <= nums.length <= 10^5
- -2^31 <= nums[i] <= 2^31 - 1

## Approach

We can solve this problem by using the array itself to mark the presence of positive integers. We can iterate through the array and for each positive integer `num`, we mark the presence of `num` by setting `nums[num - 1]` to a negative value. After this process, the first positive integer not marked as negative will be the smallest missing positive integer.

## Implementation

The solution to this problem can be implemented in the `firstMissingPositive()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `firstMissingPositive()` function in your Python code.
3. Call the `firstMissingPositive()` function with the array `nums` as input to find the smallest missing positive integer.


