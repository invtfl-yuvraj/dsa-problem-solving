# Is it Fibonacci

## Problem Statement

Geek just learned about Fibonacci numbers. The Fibonacci Sequence is the series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, ..., where the next number is found by adding up the two numbers before it.

He defines a new series called Geeky numbers. Here the next number is the sum of the K preceding numbers. You are given an array of size K, `GeekNum[]`, where the ith element of the array represents the ith Geeky number. Return its Nth term.

Note: This problem can be solved in O(N^2) time complexity but the user has to solve this in O(N). The constraints are less because there can be integer overflow in the terms.

## Examples

### Example 1:
**Input:**
N = 6, K = 1
GeekNum[] = {4}

**Output:**
4

**Explanation:**
Terms are 4, 4, 4, 4, 4, 4

### Example 2:
**Input:**
N = 5, K = 3
GeekNum[] = {0, 1, 2}

**Output:**
6

**Explanation:**
Terms are 0, 1, 2, 3, 6.
So the 5th term is 6

## Constraints:
- \(1 \leq K < 30\)
- \(1 \leq N \leq 70\)
- \(K \leq N\)
- \(0 < GeekNum[] < 100\)

## Approach

To solve this problem efficiently in O(N) time complexity, we can use the sliding window technique. We'll keep a running sum of the last K terms to quickly compute the next term in the series.

### Steps:
1. Initialize the Geeky number series with the given initial K terms.
2. Use a loop to generate the terms from K to N.
3. In each iteration, compute the next term by summing the last K terms.
4. Update the running sum for the sliding window to include the new term and exclude the term that is no longer in the window.
5. Return the Nth term.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp