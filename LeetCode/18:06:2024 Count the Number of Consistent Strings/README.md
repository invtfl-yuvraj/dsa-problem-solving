# Count the Number of Consistent Strings

## Problem Statement
You are given a string `allowed` consisting of distinct characters and an array of strings `words`. A string is consistent if all characters in the string appear in the string `allowed`.

Return the number of consistent strings in the array `words`.

## Examples

**Example 1:**
**Input:**
allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
**Output:**
2
**Explanation:**
Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.

**Example 2:**
**Input:**
allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]
**Output:**
7
**Explanation:**
All strings are consistent.

**Example 3:**
**Input:**
allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
**Output:**
4
**Explanation:**
Strings "cc", "acd", "ac", and "d" are consistent.

## Constraints
- 1 <= words.length <= 10^4
- 1 <= allowed.length <= 26
- 1 <= words[i].length <= 10
- The characters in `allowed` are distinct.
- `words[i]` and `allowed` contain only lowercase English letters.

## Approach
1. **Character Set for Allowed**:
   - Use a set to store characters from the string `allowed` for O(1) look-up time.
   
2. **Check Consistency**:
   - For each word in the `words` array, check if all its characters are in the `allowed` set.
   
3. **Count Consistent Strings**:
   - Count and return the number of words that are consistent.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp