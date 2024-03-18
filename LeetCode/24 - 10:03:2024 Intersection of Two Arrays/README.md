## Intersection of Two Arrays
## Problem Statement
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

## Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Explanation: The intersection of the two arrays is [2].

## Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: The intersection of the two arrays is [4,9]. Note that the order of the elements in the output array does not matter.

## Approach
To find the intersection of two arrays, we can use a hash set to store the elements of one array and then iterate through the second array to check for common elements. We'll store the common elements in another hash set to ensure uniqueness. Finally, we'll convert the resulting hash set to an array.

## Implementation
The solution to this problem can be found in the solution.cpp file provided in this repository.

## How to Use
To use this solution:

Clone this repository to your local machine.
Compile the solution.cpp file using a C++ compiler.
Run the compiled executable file.
Feel free to copy and paste this into your readme.md file.