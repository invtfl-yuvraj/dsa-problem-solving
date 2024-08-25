# Number of Subarrays of 0's

## Problem Statement

Given an array `arr` of length `N` consisting of only 0's and 1's, the task is to find the total number of subarrays that consist only of 0's.

## Examples

### Example 1:
**Input:**  
`N = 4`  
`arr[] = {0, 0, 1, 0}`

**Output:**  
`4`

**Explanation:**  
- Subarrays of length 1: `{0}, {0}, {0}` - Total 3 subarrays.
- Subarrays of length 2: `{0, 0}` - Total 1 subarray.

Total number of subarrays = 3 + 1 = 4.

### Example 2:
**Input:**  
`N = 4`  
`arr[] = {0, 0, 0, 0}`

**Output:**  
`10`

**Explanation:**  
- Subarrays of length 1: `{0}, {0}, {0}, {0}` - Total 4 subarrays.
- Subarrays of length 2: `{0, 0}, {0, 0}, {0, 0}` - Total 3 subarrays.
- Subarrays of length 3: `{0, 0, 0}, {0, 0, 0}` - Total 2 subarrays.
- Subarrays of length 4: `{0, 0, 0, 0}` - Total 1 subarray.

Total number of subarrays = 4 + 3 + 2 + 1 = 10.

## Constraints

- `1 <= N <= 10^6`
- `0 <= arr[i] <= 1`

## Expected Time Complexity

- `O(N)`

## Expected Auxiliary Space

- `O(1)`

## Approach

The task can be solved efficiently in `O(N)` time by recognizing that the number of subarrays formed by a sequence of consecutive `k` zeros is given by `k * (k + 1) / 2`.

### Steps:
1. Traverse the array and count the length of consecutive sequences of `0's`.
2. For each sequence of length `k`, add `k * (k + 1) / 2` to the total count.
3. Reset the counter whenever a `1` is encountered.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp