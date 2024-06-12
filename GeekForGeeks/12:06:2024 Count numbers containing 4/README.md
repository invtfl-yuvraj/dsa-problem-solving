# Count Numbers Containing 4

## Problem Statement

You are given a number `n`, return the count of total numbers from 1 to `n` containing 4 as a digit.

### Examples

**Example 1:**

Input:  
n = 9

Output:  
1

Explanation:  
4 is the only number between 1 to 9 which contains 4 as a digit.

**Example 2:**

Input:  
n = 44

Output:  
9

Explanation:  
4, 14, 24, 34, 40, 41, 42, 43 & 44, there are total 9 numbers containing 4 as a digit.

## Constraints

- 1 <= n <= 10^5

**Expected Time Complexity:** O(n log n)  
**Expected Auxiliary Space:** O(1)

## Approach

To solve this problem, we need to iterate through each number from 1 to `n` and check if the number contains the digit '4'. We can convert each number to a string and check for the presence of '4'. 

### Steps:

1. Initialize a counter to zero.
2. Iterate through each number from 1 to `n`.
3. Convert the current number to a string.
4. Check if the string contains the digit '4'.
5. If it does, increment the counter.
6. Return the counter after the loop completes.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the countNumbersWith4() function in your C++ code.
2. Call the countNumbersWith4() function with the number n as input to get the count of numbers containing '4' as a digit.
