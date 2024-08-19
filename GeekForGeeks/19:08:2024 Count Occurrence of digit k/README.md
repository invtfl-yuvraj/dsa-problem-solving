# Count Occurrence of Digit k

## Problem Statement

Given an array `arr[]`, return an integer denoting the total number of times digit `k` appears in the array.

## Examples

### Example 1:
**Input:**  
`k = 1, arr[] = [11, 12, 13, 14, 15]`

**Output:**  
`6`

**Explanation:**  
Here, digit `1` appears `6` times in the entire array.

### Example 2:
**Input:**  
`k = 3, arr[] = [11, 121, 15]`

**Output:**  
`0`

**Explanation:**  
Here, digit `3` does not appear in the array.

## Constraints
- `1 <= arr.size() <= 20`
- `1 <= arr[i] <= 1000`
- `1 <= k <= 9`

## Expected Time Complexity
- `O(n)`

## Expected Auxiliary Space
- `O(1)`

## Approach

The problem can be solved by iterating through each number in the array, converting it to a string, and counting how many times the digit `k` appears in that string. We then accumulate the count for all numbers in the array.

### Steps:
1. Initialize a counter to zero.
2. Iterate through each element of the array.
3. For each element, convert it to a string and count occurrences of the digit `k`.
4. Accumulate the counts.
5. Return the total count.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp