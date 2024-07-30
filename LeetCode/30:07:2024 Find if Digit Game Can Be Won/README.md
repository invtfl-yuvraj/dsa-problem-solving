# Find if Digit Game Can Be Won

## Problem Statement

You are given an array of positive integers `nums`.

Alice and Bob are playing a game. In the game, Alice can choose either all single-digit numbers (1-9) or all double-digit numbers (10-99) from `nums`, and the rest of the numbers are given to Bob. Alice wins if the sum of her numbers is strictly greater than the sum of Bob's numbers.

Return `true` if Alice can win this game, otherwise, return `false`.

## Examples

**Example 1:**

**Input:**  
nums = [1, 2, 3, 4, 10]

**Output:**  
false

**Explanation:**  
Alice cannot win by choosing either single-digit or double-digit numbers.

**Example 2:**

**Input:**  
nums = [1, 2, 3, 4, 5, 14]

**Output:**  
true

**Explanation:**  
Alice can win by choosing single-digit numbers which have a sum equal to 15.

**Example 3:**

**Input:**  
nums = [5, 5, 5, 25]

**Output:**  
true

**Explanation:**  
Alice can win by choosing double-digit numbers which have a sum equal to 25.

## Constraints

- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 99`

## Expected Time Complexity

- O(n)

## Expected Auxiliary Space

- O(1)

## Approach

1. Iterate through the `nums` array and calculate the sums of single-digit numbers and double-digit numbers separately.
2. Compare the sum of single-digit numbers (Alice's choice) with the sum of double-digit numbers (Bob's sum) and vice versa.
3. If either sum for Alice is strictly greater than Bob's corresponding sum, return `true`. Otherwise, return `false`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp