# Panagram Checking

## Problem Statement

Given a string `s`, check if it is a "Panagram" or not.

A "Panagram" is a sentence containing every letter in the English Alphabet.

## Examples

### Example 1:

**Input:**
s = "Bawds jog, flick quartz, vex nymph"

**Output:**
1

**Explanation:**
In the given input, there are all the letters of the English alphabet. Hence, the output is 1.
### Example 2:

**Input:**
s = "sdfs"

**Output:**
0

**Explanation:**
In the given input, there aren't all the letters present in the English alphabet. Hence, the output is 0.


## Your Task

You do not have to take any input or print anything. You need to complete the function `checkPangram()` that takes a string as a parameter and returns `true` if the string is a Panagram, or else it returns `false`.

## Expected Time Complexity

- O(|s|)

## Expected Auxiliary Space

- O(1)

## Constraints

- 1 ≤ |s| ≤ 10^4
- Both Uppercase & Lowercase are considerable

## Approach

To determine if a string is a panagram, follow these steps:

1. Create a set to track the unique letters found in the string.
2. Iterate over each character in the string.
3. If the character is a letter, convert it to lowercase (to handle case insensitivity) and add it to the set.
4. After iterating through the string, check if the set contains all 26 letters of the English alphabet.
5. Return `true` if the set has all 26 letters, otherwise return `false`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the convertToZigZag() function in your C++ code.
2. Call the convertToZigZag() function with the array arr as input to convert the array into a zig-zag fashion.