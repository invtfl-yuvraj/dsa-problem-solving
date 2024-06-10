# Non Repeating Character

## Problem Statement

Given a string `S` consisting of lowercase Latin Letters, return the first non-repeating character in `S`. If there is no non-repeating character, return `$`.

### Examples

**Example 1:**

Input:  
S = hello

Output:  
h

Explanation:  
In the given string, the first character which is non-repeating is `h`, as it appears first and there is no other `h` in the string.

**Example 2:**

Input:  
S = zxvczbtxyzvy

Output:  
c

Explanation:  
In the given string, `c` is the character which is non-repeating.

## Constraints

- 1 <= N <= 10^5
- `S` consists of lowercase Latin letters only.

## Approach

To solve this problem, we can use a hashmap to store the count of each character in the string. We then iterate through the string a second time to find the first character with a count of 1.

### Steps:

1. Create a hashmap to count the frequency of each character in the string `S`.
2. Iterate through the string and populate the hashmap.
3. Iterate through the string again to find the first character that has a frequency of 1 in the hashmap.
4. Return this character. If no such character is found, return `$`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the nonrepeatingCharacter() function in your C++ code.
2. Call the nonrepeatingCharacter() function with the string S as input to get the first non-repeating character. If there is no non-repeating character, it will return $.
