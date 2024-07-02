# Intersection of Two Arrays II

## Problem Statement

Given two integer arrays `nums1` and `nums2`, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays, and you may return the result in any order.

## Examples

**Example 1:**

**Input:**
nums1 = [1, 2, 2, 1]
nums2 = [2, 2]

**Output:**
[2, 2]

**Example 2:**

**Input:**
nums1 = [4, 9, 5]
nums2 = [9, 4, 9, 8, 4]

**Output:**
[4, 9]

**Explanation:**
[9, 4] is also accepted.

## Constraints

- \( 1 \leq nums1.length, nums2.length \leq 1000 \)
- \( 0 \leq nums1[i], nums2[i] \leq 1000 \)

## Approach

1. **Count Elements:** Use a dictionary to count the occurrences of each element in `nums1`.
2. **Find Intersection:** Iterate through `nums2` and check if the element exists in the dictionary with a non-zero count. If it does, add it to the result and decrement the count in the dictionary.
3. **Return Result:** Return the result array.

## Follow Up

1. **If the arrays are already sorted:**
   - Use two pointers to traverse both arrays and find the intersection in linear time.

2. **If nums1's size is small compared to nums2's size:**
   - Use the smaller array to build the count dictionary for efficiency.

3. **If elements of nums2 are stored on disk and memory is limited:**
   - Use a streaming approach to read chunks of `nums2` and process them against the count dictionary built from `nums1`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp