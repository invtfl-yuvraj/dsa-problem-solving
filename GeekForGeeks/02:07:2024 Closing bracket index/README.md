# Closing Bracket Index

## Problem Statement

Given a string with brackets (`'['` and `']'`) and the index of an opening bracket, find the index of the corresponding closing bracket.

## Examples

**Example 1:**

**Input:**
S = "[ABC[23]][89]"
pos = 0

**Output:**
8

**Explanation:**
The closing bracket corresponding to the opening bracket at index 0 is at index 8.

**Example 2:**

**Input:**
S = "ABC[58]"
pos = 3

**Output:**
6

**Explanation:**
The closing bracket corresponding to the opening bracket at index 3 is at index 6.

## Constraints

- \( 1 \leq N \leq 2 \times 10^5 \)
- The input string `S` consists of uppercase English letters and brackets only.
- `pos` is a valid index of an opening bracket in `S`.

## Approach

1. **Initialization:** Start from the given opening bracket position.
2. **Balance Counter:** Use a counter to keep track of the balance between opening and closing brackets.
3. **Traversal:** Traverse the string from the given position to find the matching closing bracket by updating the balance counter.
4. **Return Result:** Return the index of the closing bracket when the balance counter returns to zero.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp