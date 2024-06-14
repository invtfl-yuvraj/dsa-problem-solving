# Minimum Increment to Make Array Unique

## Problem Statement
You are given an integer array `nums`. In one move, you can pick an index `i` where `0 <= i < nums.length` and increment `nums[i]` by 1.

Return the minimum number of moves to make every value in `nums` unique.

The test cases are generated so that the answer fits in a 32-bit integer.

## Examples

**Example 1:**
**Input:**
nums = [1,2,2]
**Output:**
1
**Explanation:**
After 1 move, the array could be [1, 2, 3].

**Example 2:**
**Input:**
nums = [3,2,1,2,1,7]
**Output:**
6
**Explanation:**
After 6 moves, the array could be [3, 4, 1, 2, 5, 7].
It can be shown with 5 or fewer moves that it is impossible for the array to have all unique values.

## Constraints
- 1 <= nums.length <= 10^5
- 0 <= nums[i] <= 10^5

## Approach
1. **Sort the Array**: Sorting the array makes it easier to identify and resolve duplicates.
2. **Increment Duplicates**: Iterate through the sorted array and increment any duplicates to the smallest possible unique value.
3. **Count Moves**: Keep track of the number of moves required to make each element unique.

## Steps
1. Sort the `nums` array.
2. Initialize a variable `moves` to keep track of the number of increments.
3. Iterate through the sorted array from the second element:
   - If the current element is less than or equal to the previous element, increment it to the previous element + 1.
   - Add the number of increments to `moves`.
4. Return the total number of moves.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp