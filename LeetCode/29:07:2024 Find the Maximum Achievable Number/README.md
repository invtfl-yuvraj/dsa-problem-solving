# Find the Maximum Achievable Number

## Problem Statement

Given two integers, `num` and `t`. A number is achievable if it can become equal to `num` after applying the following operation:

Increase or decrease the number by 1, and simultaneously increase or decrease `num` by 1.

Return the maximum achievable number after applying the operation at most `t` times.

## Examples

**Example 1:**

**Input:**  
num = 4, t = 1

**Output:**  
6

**Explanation:**  
Apply the following operation once:  
- Decrease the maximum achievable number by 1, and increase `num` by 1.  
So, the achievable number becomes 5, and `num` becomes 5.  
Apply the operation once more to reach the maximum achievable number of 6 while `num` also becomes 6.

**Example 2:**

**Input:**  
num = 3, t = 2

**Output:**  
7

**Explanation:**  
Apply the following operation twice:  
- Decrease the maximum achievable number by 1, and increase `num` by 1.  
So, the achievable number becomes 5, and `num` becomes 5.  
Apply the operation once more to reach the maximum achievable number of 7 while `num` also becomes 7.

## Constraints

- `1 <= num, t <= 50`

## Expected Time Complexity

- O(1)

## Expected Auxiliary Space

- O(1)

## Approach

1. The problem essentially allows us to modify the initial number `num` by `t` units.
2. To achieve the maximum achievable number, increase the initial number `num` by `2 * t`.
3. The maximum achievable number is `num + 2 * t`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp