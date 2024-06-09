# Convert array into Zig-Zag fashion

## Problem Statement

Given an array `arr` of distinct elements of size `n`, the task is to rearrange the elements of the array in a zig-zag fashion so that the converted array should be in the below form: 

arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 

**Note:** Modify the given `arr[]` only. If your transformation is correct, the output will be `1` else the output will be `0`. 

### Examples

Input:  
n = 7, arr[] = {4, 3, 7, 8, 6, 2, 1}

Output:  
1

Explanation: 
After modification, the array will look like `4 < 7 > 3 < 8 > 2`, hence output will be `1`.

**Expected Time Complexity:** O(n)  
**Expected Auxiliary Space:** O(1)

**Constraints:**  
1 <= n <= 10^6  
0 <= arr[i] <= 10^9

## Approach

To solve this problem, we can iterate through the array and swap adjacent elements if they don't satisfy the zig-zag pattern condition. We can check if the current index is even or odd to determine whether the elements should be in increasing or decreasing order.

### Steps:

1. Iterate through the array.
2. If the current index is even and the current element is greater than the next element, swap them.
3. If the current index is odd and the current element is less than the next element, swap them.
4. Continue this process until the entire array satisfies the zig-zag pattern condition.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the convertToZigZag() function in your C++ code.
2. Call the convertToZigZag() function with the array arr as input to convert the array into a zig-zag fashion.
