# Remove Duplicates

## Problem Statement

Given a string `str` without spaces, the task is to remove all duplicate characters from it, keeping only the first occurrence.

**Note:** The original order of characters must be kept the same.

## Examples

**Example 1:**

**Input:**  
str = "zvvo"  

**Output:**  
"zvo"

**Explanation:**  
Only the first occurrence of each character is kept, so the output is "zvo".

**Example 2:**

**Input:**  
str = "gfg"  

**Output:**  
"gf"

**Explanation:**  
Only the first occurrence of each character is kept, so the output is "gf".

## Constraints

- `1 <= |str| <= 10^5`
- `str` contains lowercase English alphabets.

## Expected Time Complexity

- O(n)

## Expected Auxiliary Space

- O(1)

## Approach

1. Use a boolean array or a set to keep track of characters that have already appeared in the string.
2. Iterate through the string and construct the result by appending characters that haven't been seen before.
3. Return the result string containing only the first occurrence of each character.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp