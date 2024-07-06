# Reverse a String using Stack

## Problem Statement

You are given a string \( S \), the task is to reverse the string using a stack.

## Examples

### Example 1:
**Input:**
S = "GeeksforGeeks"

**Output:**
skeeGrofskeeG


## Your Task:
You don't need to read input or print anything. Your task is to complete the function `reverse()` which takes the string \( S \) as an input parameter and returns the reversed string.

## Expected Time Complexity:
- \( O(N) \)

## Expected Auxiliary Space:
- \( O(N) \)

## Constraints:
- \( 1 \leq \) length of the string \( \leq 100 \)

## Approach

1. **Use Stack Data Structure:**
   - Push each character of the string onto a stack.
   - Pop each character from the stack to form the reversed string.

2. **Stack Operations:**
   - Stacks follow Last In, First Out (LIFO) principle.
   - By pushing all characters onto the stack and then popping them, we get the characters in reverse order.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp