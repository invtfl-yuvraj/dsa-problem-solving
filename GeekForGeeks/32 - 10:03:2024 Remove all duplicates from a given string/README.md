# Remove Duplicates from a Given String

## Problem Statement

Given a string `str` which may contain lowercase and uppercase characters. The task is to remove all duplicate characters from the string and find the resultant string. The order of remaining characters in the output should be the same as in the original string.

### Example 1:

Input:
str = "geEksforGEeks"
Output: 
"geEksforG"
Explanation: 
After removing duplicate characters such as E, e, k, s, we have the string as "geEksforG".

### Example 2:

Input:
str = "HaPpyNewYear"
Output: 
"HaPpyNewYr"
Explanation: 
After removing duplicate characters such as e, a, we have the string as "HaPpyNewYr".

## Approach

To solve this problem, we can use a hash set to keep track of the characters we have seen. We iterate over each character in the string, and if the character is not already in the hash set, we add it to the result string and the hash set. If the character is already in the hash set, we skip it. This ensures that the resultant string contains only unique characters.

## Implementation

The solution to this problem can be found in the `solution.cpp` file provided in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.


