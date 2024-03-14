# Minimum Common Value

## Problem Statement

Given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst `nums1` and `nums2`, return -1.

Note that an integer is said to be common to `nums1` and `nums2` if both arrays have at least one occurrence of that integer.

### Example 1:

Input: `nums1` = [1,2,3], `nums2` = [2,4]
Output: 2
Explanation: The smallest element common to both arrays is 2, so we return 2.

### Example 2:

Input: `nums1` = [1,2,3,6], `nums2` = [2,3,4,5]
Output: 2
Explanation: There are two common elements in the arrays 2 and 3 out of which 2 is the smallest, so 2 is returned.

### Constraints:

- 1 <= nums1.length, nums2.length <= 105
- 1 <= nums1[i], nums2[j] <= 109
- Both nums1 and nums2 are sorted in non-decreasing order.

## Approach

To solve this problem, we can use two pointers to iterate through both arrays simultaneously. We'll start with the smallest elements in both arrays, and at each step, we'll compare the current elements of both arrays. If they are equal, we'll return that element as the minimum common value. If not, we'll move the pointer of the array with the smaller current element forward. We'll continue this process until we find a common element or exhaust one of the arrays.

## Implementation

The solution to this problem can be found in the `solution.cpp` file provided in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.


