# Height Checker

## Problem Statement

A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height. Let this ordering be represented by the integer array `expected` where `expected[i]` is the expected height of the `i`-th student in line.

You are given an integer array `heights` representing the current order that the students are standing in. Each `heights[i]` is the height of the `i`-th student in line (0-indexed).

Return the number of indices where `heights[i] != expected[i]`.

### Examples

**Example 1:**

Input:  
heights = [1,1,4,2,1,3]

Output:  
3

Explanation:  
heights:  `[1,1,4,2,1,3]`  
expected: `[1,1,1,2,3,4]`  
Indices 2, 4, and 5 do not match.

**Example 2:**

Input:  
heights = [5,1,2,3,4]

Output:  
5

Explanation:  
heights:  `[5,1,2,3,4]`  
expected: `[1,2,3,4,5]`  
All indices do not match.

**Example 3:**

Input:  
heights = [1,2,3,4,5]

Output:  
0

Explanation:  
heights:  `[1,2,3,4,5]`  
expected: `[1,2,3,4,5]`  
All indices match.

## Constraints

- 1 <= heights.length <= 100
- 1 <= heights[i] <= 100

## Approach

To solve this problem, we can follow these steps:

1. Create a copy of the `heights` array and sort it to get the `expected` array.
2. Compare each element in the `heights` array with the corresponding element in the `expected` array.
3. Count the number of indices where the elements in `heights` and `expected` do not match.
4. Return the count.

### Steps:

1. Copy the `heights` array to a new array `expected`.
2. Sort the `expected` array.
3. Initialize a counter to 0.
4. Iterate through the arrays and increment the counter for each mismatch.
5. Return the counter.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the heightChecker() function in your C++ code.
2. Call the heightChecker() function with the array heights as input to get the number of indices where heights[i] does not match expected[i].
