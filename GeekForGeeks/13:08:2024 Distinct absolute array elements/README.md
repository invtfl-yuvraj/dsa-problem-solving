# Distinct Absolute Array Elements

## Problem Statement

Given a sorted array `arr[]`, count the number of distinct absolute values present in the array.

## Examples

### Example 1:
**Input:**  
arr[] = [-3, -2, 0, 3, 4, 5]

**Output:**  
5

**Explanation:**  
There are 5 distinct absolute values i.e. `0, 2, 3, 4`, and `5`.

### Example 2:
**Input:**  
arr[] = [-1, -1, -1, -1, 0, 1, 1, 1, 1]

**Output:**  
2

**Explanation:**  
There are 2 distinct absolute values among the elements of this array, i.e. `0` and `1`.

## Constraints
- `1 <= arr.size() <= 10^6`
- `-10^8 <= arr[i] <= 10^8`

## Expected Time Complexity
- `O(n)`

## Expected Auxiliary Space
- `O(1)`

## Approach

The problem can be efficiently solved using a two-pointer technique since the array is sorted. The idea is to iterate from both ends of the array towards the center, counting the distinct absolute values as we progress.

### Steps:
1. **Initialize Two Pointers**:
   - Start with two pointers, one at the beginning (`left`) and one at the end (`right`) of the array.
   
2. **Traverse the Array**:
   - Compare the absolute values at the two pointers.
   - Move the pointer corresponding to the larger absolute value inward, counting distinct values as you go.
   - Ensure that you skip over any duplicate values.

3. **Stop When Pointers Meet**:
   - Continue this process until the two pointers meet.

4. **Return the Count**:
   - The final count will give the number of distinct absolute values in the array.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp