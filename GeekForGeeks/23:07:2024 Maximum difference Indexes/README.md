# Maximum difference Indexes

## Problem Statement

Given an array `A[]` of size `N`. Let us call the difference between indices of an element's first and last appearance in the array `A[]` a gap. Find the maximum possible gap. Note that if any element appears only once, then the gap for that element is 0.

## Examples

### Example 1:
**Input:**
N = 9
A[] = {2, 1, 3, 4, 2, 1, 5, 1, 7}

**Output:**
6

**Explanation:**
For the above test case (Assuming 0-based indexing): 
Number 1's first appearance is at index 1 and last appearance is at index 7. This implies gap is 7-1=6.
This is the maximum possible in the given test case.

## Constraints:
- \(1 \leq N \leq 10^5\)
- \(-10^5 \leq A_i \leq 10^5\)

## Your Task:
You don't need to read input or print anything. Your task is to complete the function `leftIndex()` which takes the array `A[]` and its size `N` as inputs and returns the Maximum Difference.

## Expected Time Complexity:
- O(N * Log(N))

## Expected Auxiliary Space:
- O(N)

## Approach

To solve this problem efficiently, we can use a dictionary to keep track of the first and last occurrence of each element in the array. This will help us compute the gap for each element in O(1) time. We then iterate over this dictionary to find the maximum gap.

### Steps:
1. Initialize an empty dictionary to store the first and last occurrence of each element.
2. Traverse the array:
   - For each element, if it is not in the dictionary, store its index as both first and last occurrence.
   - If it is already in the dictionary, update the last occurrence with the current index.
3. Initialize a variable to store the maximum gap.
4. Iterate over the dictionary:
   - Compute the gap for each element (last occurrence - first occurrence).
   - Update the maximum gap if the current gap is greater.
5. Return the maximum gap.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp