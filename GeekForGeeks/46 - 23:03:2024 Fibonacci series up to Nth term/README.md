# Fibonacci Series up to Nth term

## Problem Statement

You are given an integer `n`, return the Fibonacci series up to the `n`th (0-based indexing) term. Since the terms can become very large, return the terms modulo 10^9+7.

### Example 1:

**Input:**  
`n = 5`

**Output:**  
`0 1 1 2 3 5`

**Explanation:**  
`0 1 1 2 3 5` is the Fibonacci series up to the 5th term.

### Example 2:

**Input:**  
`n = 10`

**Output:**  
`0 1 1 2 3 5 8 13 21 34 55`

**Explanation:**  
`0 1 1 2 3 5 8 13 21 34 55` is the Fibonacci series up to the 10th term.

## Constraints

- `1 <= n <= 10^5`

## Approach

To generate the Fibonacci series up to the `n`th term modulo 10^9+7:

1. Initialize an array `fib` of size `n+1` to store the Fibonacci series.
2. Initialize the first two elements of the `fib` array as 0 and 1.
3. Iterate from index 2 to `n`:
   - Calculate the next Fibonacci number as the sum of the previous two Fibonacci numbers.
   - Store the result modulo 10^9+7 in the `fib` array.
4. Return the `fib` array.

## Implementation

The solution to this problem can be implemented in the `Series()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `Series()` function in your Python code.
3. Call the `Series()` function with the integer `n` as input to generate the Fibonacci series up to the `n`th term.


