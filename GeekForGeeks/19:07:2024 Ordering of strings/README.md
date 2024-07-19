# Ordering of Strings

## Problem Statement

You will be given \( N \) number of strings. You have to find the lexicographically smallest string and the lexicographically largest string among these strings.

## Examples

### Example 1:
**Input:**
N = 3
strings = ["a", "ab", "abc"]

**Output:**
["a", "abc"]

**Explanation:**
Lexicographically smallest is "a" and lexicographically largest is "abc".

### Example 2:
**Input:**
N = 2
strings = ["abc", "abc"]

**Output:**
["abc", "abc"]

**Explanation:**
Lexicographically smallest is "abc" and lexicographically largest is "abc".

## Your Task:
You don't need to read input or print anything. Complete the function `orderString()` which takes a list of strings and an integer \( N \) as input parameters and returns a list of size 2 where the first value should be the lexicographically smallest string and the second value should be the lexicographically largest string.

## Expected Time Complexity:
\( O(N \times \text{max of all string lengths}) \)

## Expected Auxiliary Space:
\( O(1) \)

## Constraints:
- \( 1 \leq N \)
- \( 1 \leq \text{length of each string} \leq 10^3 \)

## Approach

To solve this problem, we can use Python's built-in string comparison capabilities. We will iterate through the list of strings to find the smallest and largest strings lexicographically.

### Steps:
1. Initialize variables to keep track of the smallest and largest strings.
2. Iterate through each string in the list.
3. Update the smallest and largest strings if the current string is smaller or larger, respectively.
4. Return the smallest and largest strings as a list.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp