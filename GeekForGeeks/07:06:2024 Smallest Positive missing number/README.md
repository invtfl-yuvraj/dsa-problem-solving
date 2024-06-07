# Smallest Positive Missing Number

## Problem Statement

You are given an array `arr[]` of `N` integers. The task is to find the smallest positive number missing from the array.

**Note:** Positive numbers start from 1.

### Example 1:

**Input:**  
N = 5  
arr[] = {1, 2, 3, 4, 5}

**Output:**  
6

**Explanation:**  
The smallest positive missing number is 6.

### Example 2:

**Input:**  
N = 5  
arr[] = {0, -10, 1, 3, -20}

**Output:**  
2

**Explanation:**  
The smallest positive missing number is 2.

## Constraints:

- 1 <= N <= 10^6
- -10^6 <= arr[i] <= 10^6

## Expected Time Complexity:

- O(N)

## Expected Auxiliary Space:

- O(1)

## Approach

1. **Segregate Positive Numbers:** First, segregate positive numbers from negative numbers. We can use a two-pointer approach to put all non-positive numbers on the left side and positive numbers on the right side of the array.
2. **Find Missing Positive:** Once we have all positive numbers, we can mark the presence of a number by using the array indices. For every positive integer `x`, we mark the position `x-1` as visited (if it's within the bounds of the array).
3. **Identify Missing Positive:** Finally, we iterate through the array to find the first index that is not marked, which corresponds to the smallest missing positive number.

## Implementation

The solution to this problem can be implemented in the `missingNumber()` function provided in the `solution.cpp` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `missingNumber()` function in your Python code.
3. Call the `missingNumber()` function with the array `arr` and its size `N` to find the smallest positive missing number.
