# Same Characters in Two Strings

## Problem Statement

Given two strings `A` and `B` of equal length, find how many times the corresponding positions in the two strings hold exactly the same character. The comparison should not be case-sensitive.

## Examples

**Example 1:**

**Input:**
A = "choice"
B = "chancE"

**Output:**
4

**Explanation:**
Characters at position 0, 1, 4, and 5 are the same in the two strings `A` and `B`.

**Example 2:**

**Input:**
A = "Geek"
B = "gang"

**Output:**
1


**Explanation:**
Characters at position 0 are the same in the two strings `A` and `B`.

## Constraints

- 1 <= A.length(), B.length() <= 10^4

## Approach

To solve this problem:
- Convert both strings to lowercase to ensure the comparison is case-insensitive.
- Iterate through the strings and count the number of positions where the characters are the same.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp