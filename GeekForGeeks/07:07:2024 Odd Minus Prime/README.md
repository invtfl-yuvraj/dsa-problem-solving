# Odd Minus Prime

## Problem Statement

Given a positive integer `n`, find the maximum sum of exactly `k` integers from the set of numbers `[1, 2, 3, ..., n]` which are odd but not prime. If it's not possible to find such a sum, return `-1`.

## Examples

### Example 1:
**Input:**
n = 10, k = 2

**Output:**
10

**Explanation:**
There are only two integers between 1 and 10, which are odd but not prime: 1 and 9. The sum of 1 and 9 is 10.

### Example 2:
**Input:**
n = 5, k = 2

**Output:**
-1

**Explanation:**
There is only one integer between 1 and 5, which is odd but not prime. Hence, the answer is not possible.


## Constraints:
- \(1 \leq n, k \leq 10^6\)

## Approach

1. **Identify Odd Non-Prime Numbers:**
   - Iterate through all numbers from 1 to `n` and identify numbers which are odd and not prime.

2. **Prime Check:**
   - Use a function to check if a number is prime.

3. **Summation:**
   - Sort the identified numbers in descending order.
   - Sum the first `k` numbers from this sorted list if the list has at least `k` elements.

4. **Edge Cases:**
   - If there are fewer than `k` odd non-prime numbers, return `-1`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp