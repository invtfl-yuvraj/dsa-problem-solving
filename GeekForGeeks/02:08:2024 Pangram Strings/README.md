# Pangram Strings

## Problem Statement

Check if the given string `S` is a pangram or not. A pangram is a sentence containing every letter in the English alphabet.

## Examples

**Example 1:**

**Input:**  
S = "Pack mY box witH fIve dozen liquor jugs"

**Output:**  
1

**Explanation:**  
The given string contains all English alphabets.

**Example 2:**

**Input:**  
S = "geeksFORgeeks"

**Output:**  
0

**Explanation:**  
The given string does not contain all English alphabets.

## Constraints

- `1 ≤ |S| ≤ 10^5`

## Expected Time Complexity

- O(N)

## Expected Auxiliary Space

- O(constant)

## Approach

1. **Initialization**: Create a set to keep track of unique alphabetic characters found in the string.
2. **Iteration**: Iterate through each character in the string:
   - Convert the character to lowercase.
   - If the character is a letter, add it to the set.
3. **Check**: After the iteration, check the size of the set:
   - If the size of the set is 26, it means all letters from 'a' to 'z' are present, hence the string is a pangram.
   - Otherwise, it is not a pangram.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
       
