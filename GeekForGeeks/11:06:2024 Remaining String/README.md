# Remaining String

## Problem Statement

Given a string `S` without spaces, a character `ch`, and an integer `count`, the task is to find the string after the specified character has occurred `count` number of times.

### Examples

**Example 1:**

Input:  
S = "Thisisdemostring", ch = 'i', count = 3

Output:  
ng


Explanation:  
Substring of `S` after the 3rd occurrence of `i` is "ng".

**Example 2:**

Input:  
S = "Thisisdemostri", ch = 'i', count = 3

Output:  
Empty string

Explanation:  
'i' occurs 3rd time at the last index.

## Constraints

- 1 <= |S| <= 10^5
- Assume upper case and lower case alphabets as different

## Note

“Empty string” should be returned in case of any unsatisfying conditions:
- The given character is not present.
- The given character is present but less than the given count.
- The given count completes on the last index.
- If the given count is 0, then the given character doesn’t matter, just return the whole string.

**Expected Time Complexity:** O(|s|)  
**Expected Auxiliary Space:** O(1)

## Approach

To solve this problem, we can iterate through the string and keep a count of occurrences of the given character. Once we reach the specified count, we return the substring from that point to the end of the string. If we don't reach the count, we return an empty string.

### Steps:

1. Initialize a counter to zero.
2. Iterate through the string, incrementing the counter each time the specified character is found.
3. If the counter matches the given count, return the substring from the current position to the end of the string.
4. If the iteration completes without reaching the count, return an empty string.


## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the printString() function in your C++ code.
2. Call the printString() function with the string S, character ch, and integer count as input to get the substring after the specified character has occurred count number of times.
