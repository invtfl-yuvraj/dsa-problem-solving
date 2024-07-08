# Search in Rotated Sorted Array

## Problem Statement

Given a sorted (in ascending order) and rotated array `arr` of distinct elements, which may be rotated at some point, and given an element `key`, the task is to find the index of the given element `key` in the array `arr`. The array `arr` is given as the range to search.

Rotation shifts elements of the array by a certain number of positions, with elements that fall off one end reappearing at the other end.

Note: 0-based indexing is followed and returns -1 if the key is not present.

## Examples

### Example 1:
**Input:**
arr = [5, 6, 7, 8, 9, 10, 1, 2, 3], key = 10

**Output:**
5

**Explanation:**
10 is found at index 5.

### Example 2:
**Input:**
arr = [3, 5, 1, 2], key = 6

**Output:**
-1

**Explanation:**
There is no element that has value 6.

## Constraints:
- \(1 \leq arr.size() \leq 10^6\)
- \(0 \leq arr[i] \leq 10^6\)
- \(1 \leq key \leq 10^5\)

## Expected Time Complexity:
- O(log n)

## Expected Auxiliary Space:
- O(1)

## Approach

To solve this problem, we can use a modified version of binary search. Since the array is sorted and rotated, there are two sorted subarrays. The key observation here is that at least one half of the array will always be sorted.

Steps:
1. Initialize `low` to 0 and `high` to `n-1` where `n` is the size of the array.
2. Perform a binary search:
   - Find the middle index `mid`.
   - If the element at `mid` is equal to `key`, return `mid`.
   - If the left half `arr[low...mid]` is sorted:
     - Check if the `key` lies in this half. If it does, adjust `high` to `mid - 1`.
     - Otherwise, adjust `low` to `mid + 1`.
   - If the right half `arr[mid+1...high]` is sorted:
     - Check if the `key` lies in this half. If it does, adjust `low` to `mid + 1`.
     - Otherwise, adjust `high` to `mid - 1`.
3. If the element is not found, return -1.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp