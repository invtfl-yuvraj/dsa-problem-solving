# K-Pangrams

## Problem Statement

Given a string `str` and an integer `k`, return `true` if the string can be changed into a pangram after at most `k` operations, else return `false`.

A single operation consists of swapping an existing alphabetic character with any other lowercase alphabetic character.

Note: A pangram is a sentence containing every letter in the English alphabet.

## Examples

**Example 1:**

**Input:**
str = "the quick brown fox jumps over the lazy dog"  
k = 0

**Output:**
true

**Explanation:**
The sentence contains all 26 characters and is already a pangram.

**Example 2:**

**Input:**
str = "aaaaaaaaaaaaaaaaaaaaaaaaaa"  
k = 25

**Output:**
true

**Explanation:**
The string contains 26 instances of 'a'. Since only 25 operations are allowed, we can keep 1 instance and change all others to make the string a pangram.

**Example 3:**

**Input:**
str = "a b c d e f g h i j k l m"  
k = 20

**Output:**
false

**Explanation:**
Since there are only 13 alphabetic characters in this case, no amount of swapping can produce a pangram.

## Constraints

- `1 <= str.size() <= 10^5`
- `0 <= k <= 50`
- `str` may contain duplicate characters.
- `str` contains only lowercase alphabets or spaces.

## Expected Time Complexity

- O(n)

## Expected Auxiliary Space

- O(1)

## Approach

1. Create a set to track unique alphabetic characters in `str`.
2. Count the number of unique alphabetic characters.
3. Determine how many characters are missing to make the string a pangram.
4. If the number of missing characters is less than or equal to `k`, return `true`. Otherwise, return `false`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp