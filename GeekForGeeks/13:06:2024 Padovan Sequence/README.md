# Padovan Sequence

## Problem Statement
Given a number `n`, find the nth number in the Padovan Sequence.

A Padovan Sequence is a sequence which is represented by the following recurrence relation:
- P(n) = P(n-2) + P(n-3)
- P(0) = P(1) = P(2) = 1

Note: Since the output may be too large, compute the answer modulo 10^9+7.

## Examples

**Input:**
n = 3
**Output:**
2
**Explanation:**
We already know, P1 + P0 = P3 and P1 = 1 and P0 = 1

**Input:**
n = 4
**Output:**
2
**Explanation:**
We already know, P4 = P2 + P1 and P2 = 1 and P1 = 1

## Constraints
- 1 <= n <= 10^6

## Expected Time Complexity
- O(n)

## Expected Auxiliary Space
- O(1)

## Approach
1. **Initialize base cases**: Start with P(0) = P(1) = P(2) = 1.
2. **Iterative computation**: Use a loop to compute the Padovan sequence up to the nth term.
3. **Modulo operation**: Since the results can be large, take each result modulo 10^9+7.
4. **Space optimization**: Use only three variables to keep track of the last three values in the sequence.

## Steps
1. Initialize three variables to store the values of P(0), P(1), and P(2).
2. Iterate from 3 to n, updating the three variables based on the recurrence relation.
3. Return the nth Padovan number.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp