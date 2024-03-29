# Binary Subarrays With Sum

## Problem Statement

Given a binary array `nums` and an integer `goal`, return the number of non-empty subarrays with a sum `goal`.

A subarray is a contiguous part of the array.

### Example 1:

**Input:**  
nums = [1, 0, 1, 0, 1], goal = 2  

**Output:**  
4  

**Explanation:**  
The 4 subarrays are bolded and underlined below:  
[1, 0, 1, 0, 1]  
[1, 0, 1, 0, 1]  
[1, 0, 1, 0, 1]  
[1, 0, 1, 0, 1]  

### Example 2:

**Input:**  
nums = [0, 0, 0, 0, 0], goal = 0  

**Output:**  
15  

## Constraints:

- 1 <= nums.length <= 3 * 10^4
- nums[i] is either 0 or 1.
- 0 <= goal <= nums.length

## Approach

To solve this problem, we can use the sliding window technique. We initialize two pointers, `left` and `right`, to iterate through the array. We keep track of the sum of the elements between the two pointers. If the sum equals `goal`, we increment the count of subarrays. We move the `right` pointer to the right to include more elements in the window. If the sum exceeds `goal`, we move the `left` pointer to the right to decrease the window size. We repeat this process until we have iterated through the entire array. Finally, we return the count of subarrays.

## Implementation

The solution to this problem can be implemented in the `numSubarraysWithSum()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `numSubarraysWithSum()` function in your Python code.
3. Call the `numSubarraysWithSum()` function with the binary array `nums` and the integer `goal` as input parameters to get the number of non-empty subarrays with the sum `goal`.


