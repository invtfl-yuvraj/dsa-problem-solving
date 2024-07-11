# Count Prefixes of a Given String

## Problem Statement

You are given a string array `words` and a string `s`, where `words[i]` and `s` comprise only of lowercase English letters.

Return the number of strings in `words` that are a prefix of `s`.

A prefix of a string is a substring that occurs at the beginning of the string. A substring is a contiguous sequence of characters within a string.

## Examples

### Example 1:

**Input:**
words = ["a","b","c","ab","bc","abc"]
s = "abc"

**Output:**
3

**Explanation:**
The strings in words which are a prefix of s = "abc" are:
"a", "ab", and "abc".
Thus the number of strings in words which are a prefix of s is 3.

### Example 2:

**Input:**
words = ["a","a"]
s = "aa"

**Output:**
2

**Explanation:**
Both of the strings are a prefix of s.
Note that the same string can occur multiple times in words, and it should be counted each time.


## Constraints:

- `1 <= words.length <= 1000`
- `1 <= words[i].length, s.length <= 10`
- `words[i]` and `s` consist of lowercase English letters only.

## Approach

To solve the problem, follow these steps:

1. Initialize a counter to keep track of the number of prefixes.
2. Iterate over each word in the `words` array.
3. For each word, check if it is a prefix of the string `s` by comparing the starting substring of `s` with the word.
4. If the word is a prefix, increment the counter.
5. Return the counter as the result.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.

## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
