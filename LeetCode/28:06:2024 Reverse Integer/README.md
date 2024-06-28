# Reverse Integer

## Problem Statement

Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2^31, 2^31 - 1]`, then return `0`.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

## Examples

**Example 1:**

**Input:**
x = 123

**Output:**
321

**Example 2:**

**Input:**
x = -123

## Constraints

- \(-2^{31} \leq x \leq 2^{31} - 1\)

## Approach

1. **Handle Negative Numbers:** If `x` is negative, record the sign and work with the absolute value.
2. **Reverse the Digits:** Convert the integer to a string, reverse the string, and convert it back to an integer.
3. **Handle Overflow:** Before returning the reversed integer, check if it lies within the 32-bit signed integer range. If not, return 0.
4. **Combine Sign with Reversed Integer:** If the original number was negative, ensure the reversed integer is also negative.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp