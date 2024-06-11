# Relative Sort Array

## Problem Statement

Given two arrays `arr1` and `arr2`, the elements of `arr2` are distinct, and all elements in `arr2` are also in `arr1`.

Sort the elements of `arr1` such that the relative ordering of items in `arr1` is the same as in `arr2`. Elements that do not appear in `arr2` should be placed at the end of `arr1` in ascending order.

### Examples

**Example 1:**

Input:  
arr1 = [2,3,1,3,2,4,6,7,9,2,19]
arr2 = [2,1,4,3,9,6]

Output:  
[2,2,2,1,4,3,3,9,6,7,19]

Explanation:  
The elements of `arr1` are reordered such that the relative ordering of items is the same as in `arr2`. Elements that do not appear in `arr2` are placed at the end in ascending order.

**Example 2:**

Input:  
arr1 = [28,6,22,8,44,17]
arr2 = [22,28,8,6]

Output:  
[22,28,8,6,17,44]


## Constraints

- 1 <= arr1.length, arr2.length <= 1000
- 0 <= arr1[i], arr2[i] <= 1000
- All the elements of `arr2` are distinct.
- Each `arr2[i]` is in `arr1`.

## Approach

To solve this problem, we can use the following approach:

1. Count the occurrences of each element in `arr1`.
2. Create an output array and append the elements of `arr2` in the order they appear, according to their counts in `arr1`.
3. Append the remaining elements (not in `arr2`) to the output array in ascending order.

### Steps:

1. Create a frequency map for `arr1`.
2. Initialize an empty result array.
3. Iterate through `arr2` and append each element to the result array according to its count in the frequency map.
4. Sort the remaining elements (not in `arr2`) and append them to the result array.
5. Return the result array.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the relativeSortArray() function in your C++ code.
2. Call the relativeSortArray() function with the arrays arr1 and arr2 as input to get the sorted array according to the specified order.