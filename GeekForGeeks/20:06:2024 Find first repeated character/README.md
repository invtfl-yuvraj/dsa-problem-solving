
# Find first repeated character

## Problem Statement

Given a string S. The task is to find the first repeated character in it. We need to find the character that occurs more than once and whose index of second occurrence is smallest. S contains only lowercase letters.

## Example

**Input:**

S = "geeksforgeeks"


**Output:**

e


**Explanation:**
'e' repeats at the third position.

## Constraints

- String S contains only lowercase letters.
- If there is no repeated character, return "-1".

## Approach

To solve this problem,
- Use a set to keep track of characters we have seen so far.
- Traverse the string and check if each character is already in the set.
- If it is, return that character as it is the first repeated character.
- If no characters are repeated, return "-1".

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp