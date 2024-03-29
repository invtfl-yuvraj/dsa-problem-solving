# Contiguous Array

## Problem Statement

Given a binary array `nums`, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

### Example 1:

**Input:**  
nums = [0, 1]  

**Output:**  
2  

**Explanation:**  
[0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

### Example 2:

**Input:**  
nums = [0, 1, 0]  

**Output:**  
2  

**Explanation:**  
[0, 1] (or [1, 0]) is a longest contiguous subarray with an equal number of 0 and 1.

## Constraints:

- 1 <= nums.length <= 10^5
- nums[i] is either 0 or 1.

## Approach

To solve this problem, we can use the concept of prefix sum. We initialize a variable `max_length` to store the maximum length of the contiguous subarray with equal number of 0s and 1s. We iterate through the array `nums`, maintaining a running sum of 0s and 1s encountered so far. We store the running sum along with its corresponding index in a hashmap. If the running sum repeats, it means there exists a contiguous subarray with equal number of 0s and 1s between the two occurrences of the running sum. We calculate the length of this subarray and update `max_length` if it is greater than the current maximum length. Finally, we return `max_length`.

## Implementation

The solution to this problem can be implemented in the `findMaxLength()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `findMaxLength()` function in your Python code.
3. Call the `findMaxLength()` function with the binary array `nums` as input to get the maximum length of a contiguous subarray with an equal number of 0 and 1.


