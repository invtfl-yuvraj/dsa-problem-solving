# Array Subset of Another Array

## Problem Statement
Given two arrays: `a1[0..n-1]` of size `n` and `a2[0..m-1]` of size `m`, where both arrays may contain duplicate elements. The task is to determine whether array `a2` is a subset of array `a1`. It's important to note that both arrays can be sorted or unsorted. Additionally, each occurrence of a duplicate element within an array is considered as a separate element of the set.

## Examples

**Example 1:**
**Input:**
a1 = {11, 7, 1, 13, 21, 3, 7, 3}
a2 = {11, 3, 7, 1, 7}
**Output:**
Yes
**Explanation:**
a2 is a subset of a1.

**Example 2:**
**Input:**
a1 = {1, 2, 3, 4, 4, 5, 6}
a2 = {1, 2, 4}
**Output:**
Yes
**Explanation:**
a2 is a subset of a1.

**Example 3:**
**Input:**
a1 = {10, 5, 2, 23, 19}
a2 = {19, 5, 3}
**Output:**
No
**Explanation:**
a2 is not a subset of a1.

## Constraints
- 1 <= n, m <= 10^5
- 1 <= a1[i], a2[j] <= 10^6

## Expected Time Complexity
- O(max(n, m))

## Expected Auxiliary Space
- O(n)

## Approach
1. **Hash Map**: Use a hash map to count the occurrences of each element in array `a1`.
2. **Check Subset**: Iterate through array `a2` and check if each element exists in the hash map with a count greater than zero. If it does, decrement the count. If it doesn't, return "No".
3. **Return Result**: If all elements in `a2` are found in `a1` with sufficient counts, return "Yes".

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp