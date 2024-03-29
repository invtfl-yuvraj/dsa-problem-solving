# Product of Array Except Self

## Problem Statement

Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

### Example 1:

**Input:**  
nums = [1, 2, 3, 4]  

**Output:**  
[24, 12, 8, 6]  

### Example 2:

**Input:**  
nums = [-1, 1, 0, -3, 3]  

**Output:**  
[0, 0, 9, 0, 0]  

## Constraints:

- 2 <= nums.length <= 10^5
- -30 <= nums[i] <= 30
- The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.

## Approach

To solve this problem without using division and in O(n) time complexity, we can use the concept of prefix and suffix products. We initialize two arrays, `left` and `right`, to store the products of all elements to the left and right of each element in `nums`, respectively. Then, we iterate through `nums` once to calculate the prefix products and once again to calculate the suffix products. Finally, we multiply the corresponding elements of `left` and `right` arrays to get the product of all elements except the current element.

## Implementation

The solution to this problem can be implemented in the `productExceptSelf()` function provided in the `solution.cpp` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `productExceptSelf()` function in your Python code.
3. Call the `productExceptSelf()` function with the integer array `nums` as input to get the array `answer` containing the product of all elements except `nums[i]`.


