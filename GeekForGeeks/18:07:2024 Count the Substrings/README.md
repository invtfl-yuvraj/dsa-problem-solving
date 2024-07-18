# Count the Substrings

## Problem Statement

Given a string \( S \). The task is to count the number of substrings which contain an equal number of lowercase and uppercase letters.

## Examples

### Example 1:
**Input:**
S = "gEEk"

**Output:**
3

**Explanation:**
There are 3 substrings of the given string which satisfy the condition. They are "gE", "gEEk" and "Ek".

### Example 2:
**Input:**
S = "WomensDAY"

**Output:**
4

**Explanation:**
There are 4 substrings of the given string which satisfy the condition. They are "Wo", "ensDAY", "nsDA" and "sD".

## Your Task:
The task is to complete the function `countSubstring()` which takes the string \( S \) as an input parameter and returns the number of substrings which contain an equal number of uppercase and lowercase letters.

## Expected Time Complexity: 
\( O(N^2) \)

## Expected Auxiliary Space: 
\( O(1) \)

## Constraints:
- \( 1 \leq |S| \leq 103 \)

## Approach

To solve this problem, we can use a brute force approach which involves generating all possible substrings and checking if they have an equal number of uppercase and lowercase letters. This can be done using nested loops.

### Steps:
1. Initialize a counter to keep track of valid substrings.
2. Use two nested loops to generate all possible substrings.
3. For each substring, count the number of uppercase and lowercase letters.
4. If the counts are equal, increment the counter.
5. Return the counter as the result.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp