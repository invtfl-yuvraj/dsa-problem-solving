# Next Greater Element I

## Problem Statement

The next greater element of some element `x` in an array is the first greater element that is to the right of `x` in the same array.

You are given two distinct 0-indexed integer arrays `nums1` and `nums2`, where `nums1` is a subset of `nums2`.

For each `0 <= i < nums1.length`, find the index `j` such that `nums1[i] == nums2[j]` and determine the next greater element of `nums2[j]` in `nums2`. If there is no next greater element, then the answer for this query is `-1`.

Return an array `ans` of length `nums1.length` such that `ans[i]` is the next greater element as described above.

## Examples

**Example 1:**

**Input:**
nums1 = [4,1,2]
nums2 = [1,3,4,2]

**Output:**
[-1, 3, -1]

**Explanation:**
- The next greater element for 4 in nums2 is -1.
- The next greater element for 1 in nums2 is 3.
- The next greater element for 2 in nums2 is -1.

**Example 2:**

**Input:**
nums1 = [2,4]
nums2 = [1,2,3,4]

**Output:**
[3, -1]

**Explanation:**
- The next greater element for 2 in nums2 is 3.
- The next greater element for 4 in nums2 is -1.

## Constraints

- `1 <= nums1.length <= nums2.length <= 1000`
- `0 <= nums1[i], nums2[i] <= 10^4`
- All integers in `nums1` and `nums2` are unique.
- All the integers of `nums1` also appear in `nums2`.

## Approach

1. Create a hashmap to store the next greater element for each element in `nums2`.
2. Use a stack to find the next greater elements.
3. Iterate over `nums2` from right to left:
    - While the stack is not empty and the top of the stack is less than or equal to the current element, pop the stack.
    - If the stack is empty, the next greater element is `-1`.
    - Otherwise, the next greater element is the top of the stack.
    - Push the current element onto the stack.
4. Use the hashmap to build the result for `nums1`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp