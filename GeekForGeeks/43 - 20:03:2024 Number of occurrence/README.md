# Number of Occurrences

## Problem Statement

Given a sorted array `Arr` of size `N` and a number `X`, find the number of occurrences of `X` in `Arr`.

### Example 1:

**Input:**  
`N = 7, X = 2`  
`Arr[] = {1, 1, 2, 2, 2, 2, 3}`

**Output:**  
`4`

**Explanation:**  
`2` occurs 4 times in the given array.

### Example 2:

**Input:**  
`N = 7, X = 4`  
`Arr[] = {1, 1, 2, 2, 2, 2, 3}`

**Output:**  
`0`

**Explanation:**  
`4` is not present in the given array.

## Constraints

- `1 ≤ N ≤ 10^5`
- `1 ≤ Arr[i] ≤ 10^6`
- `1 ≤ X ≤ 10^6`

## Approach

To find the number of occurrences of `X` in the sorted array `Arr`, you can use binary search to find the first and last occurrences of `X`. Once you have these indices, you can calculate the count of `X` in the array.

1. Use binary search to find the leftmost index (`left`) of `X` in the array `Arr`.

2. Use binary search to find the rightmost index (`right`) of `X` in the array `Arr`.

3. If `left` and `right` are valid indices and `left <= right`, calculate the count of `X` as `right - left + 1`.

4. Return the count. If `left` is greater than `right`, return `0` as `X` is not present in the array.

## Implementation

The solution to this problem can be implemented in the `count()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `count()` function in your Python code.
3. Call the `count()` function with the array of integers `Arr`, its length `N`, and the number `X` as inputs to find the number of occurrences of `X` in `Arr`.


