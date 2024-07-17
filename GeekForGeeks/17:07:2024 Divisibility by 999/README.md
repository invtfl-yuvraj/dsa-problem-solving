# Divisibility by 999

## Problem Statement

You are given a large number \( N \) in the form of a string. You have to check whether it is divisible by 999 without directly dividing or finding the modulo of the number by 999.

## Examples

### Example 1:
**Input:**
N = "1998"

**Output:**
Divisible

### Example 2:
**Input:**
N = "99999999"

**Output:**
Not divisible

## Constraints:
- \( 1 \leq |N| \leq 103 \)

## Approach

To determine if a number is divisible by 999, we can use the property that a number is divisible by 999 if the sum of its digits is divisible by 999.

### Steps:
1. Initialize a variable to store the sum of the digits.
2. Iterate through each character in the string \( N \).
3. Convert each character to an integer and add it to the sum.
4. Check if the sum is divisible by 999 by using the property of digital roots.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp