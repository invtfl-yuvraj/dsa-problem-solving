# Armstrong Numbers

## Problem Statement
You are given a 3-digit number `n`. Find whether it is an Armstrong number or not.

An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3³ + 7³ + 1³ = 371.

Return "true" if it is an Armstrong number else return "false".

## Examples

**Input:**
n = 153
**Output:**
true
**Explanation:**
153 is an Armstrong number since 1³ + 5³ + 3³ = 153. Hence, the answer is "true".

**Input:**
n = 372
**Output:**
false
**Explanation:**
372 is not an Armstrong number since 3³ + 7³ + 2³ = 378. Hence, the answer is "false".

## Constraints
- 100 ≤ n < 1000

## Expected Time Complexity
- O(1)

## Expected Auxiliary Space
- O(1)

## Approach
1. Extract the digits of the number.
2. Compute the sum of the cubes of the digits.
3. Compare the sum with the original number.
4. Return "true" if they are equal, otherwise return "false".

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp