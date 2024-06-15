# Prime Pair with Target Sum

## Problem Statement
Given a number `n`, find out if `n` can be expressed as `a + b`, where both `a` and `b` are prime numbers. If such a pair exists, return the values of `a` and `b`, otherwise return `[-1, -1]` as an array of size 2.

Note: If `[a, b]` is one solution with `a <= b`, and `[c, d]` is another solution with `c <= d`, and `a < c`, then `[a, b]` is considered as our answer.

## Examples

**Example 1:**
**Input:**
n = 10
**Output:**
3 7
**Explanation:**
There are two possibilities: 3 + 7 and 5 + 5 are both prime pairs whose sum is 10. We'll pick 3 + 7 because 3 < 5.

**Example 2:**
**Input:**
n = 3
**Output:**
-1 -1
**Explanation:**
There are no solutions for the number 3.

## Constraints
- 2 <= n <= 10^6

## Expected Time Complexity
- O(n * loglog(n))

## Expected Auxiliary Space
- O(n)

## Approach
1. **Sieve of Eratosthenes**: Use this algorithm to generate all prime numbers up to `n`.
2. **Find Pair**: Iterate through the list of primes and check if `n - prime` is also a prime.
3. **Return Pair**: If such a pair is found, return it; otherwise, return `[-1, -1]`.

## Steps
1. **Generate Primes**: Implement the Sieve of Eratosthenes to find all primes up to `n`.
2. **Check for Pair**: Iterate through the primes and check if the difference between `n` and the prime is also a prime.
3. **Return Result**: Return the first such pair found.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp