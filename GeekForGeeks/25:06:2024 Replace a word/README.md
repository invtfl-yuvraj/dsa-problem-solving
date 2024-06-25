# Replace a word

## Problem Statement

Given three strings `S`, `oldW`, and `newW`, find all occurrences of the word `oldW` in `S` and replace them with the word `newW`.

## Examples

**Example 1:**

**Input:**
S = "xxforxx xx for xx"
oldW = "xx"
newW = "Geeks"

**Output:**
"GeeksforGeeks Geeks for Geeks"

**Explanation:**
Replacing each "xx" with "Geeks" in S.

**Example 2:**

**Input:**
S = "india is the xx country"
oldW = "xx"
newW = "best"

**Output:**
"india is the best country"

**Explanation:**
Replacing each "xx" with "best" in S.

## Constraints

- `1 <= |S| <= 1000`
- `1 <= |oldW|, |newW| <= |S|`

## Expected Time Complexity

- O(n^2)

## Expected Auxiliary Space

- O(1)

## Approach

1. Use the `find` function to locate the first occurrence of `oldW` in `S`.
2. Replace the found occurrence with `newW`.
3. Continue the process until all occurrences of `oldW` are replaced.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp