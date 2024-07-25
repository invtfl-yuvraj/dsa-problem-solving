# Reorganize the Array

## Problem Statement

Given an array `A[]` of length `N`, containing elements ranging from `0` to `N-1`, the task is to rearrange the elements of the array such that `A[i] = i`. If `i` is not present in the array, place `-1` at that index.

## Examples

### Example 1:
**Input:**
A[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}

**Output:**
-1 1 2 3 4 -1 6 -1 -1 9

**Explanation:**
The original array is rearranged such that each index `i` contains the value `i` if present, otherwise `-1`.

### Example 2:
**Input:**
A[] = {2, 0, 1}

**Output:**
0 1 2

**Explanation:**
All elements `0`, `1`, and `2` are present and rearranged in the correct order.

## Approach

1. **Direct Placement:**
   - Iterate over the array and check if the current element is within the range `0` to `N-1`.
   - If the element is in the range, place it at the correct index (`A[element] = element`).
   - After placing an element, set the original position to `-1` to avoid duplication and confusion.

2. **Final Adjustment:**
   - Iterate through the array once more and ensure that the elements are correctly placed. If an index doesn't contain the correct element, set it to `-1`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp