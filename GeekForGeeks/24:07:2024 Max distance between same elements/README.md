# Max Distance Between Same Elements

## Problem Statement

Given an array with repeated elements, find the maximum distance between two occurrences of the same element.

## Examples

### Example 1:
**Input:**
n = 6
arr = [1, 1, 2, 2, 2, 1]

**Output:**
5

**Explanation:**
For element `1`, the maximum distance is `5 - 0 = 5`.  
For element `2`, the maximum distance is `4 - 2 = 2`.  
Thus, the maximum distance is `5`.

### Example 2:
**Input:**
n = 12
arr = [3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2]

**Output:**
10

**Explanation:**
For element `2`, the maximum distance is `11 - 1 = 10`.  
For element `1`, the maximum distance is `4 - 2 = 2`.  
For element `4`, the maximum distance is `10 - 5 = 5`.  
Thus, the maximum distance is `10`.

## Approach

1. **Tracking First and Last Occurrences:**
   - Use a dictionary to store the first and last occurrence of each element.
   - Iterate through the array and update the dictionary with the first and last index of each element.
   - Calculate the difference between the last and first occurrence for each element.

2. **Determine Maximum Distance:**
   - Iterate through the dictionary and find the maximum difference.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp