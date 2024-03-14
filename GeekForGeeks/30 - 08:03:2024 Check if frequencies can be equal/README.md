# Check if Frequencies Can Be Equal

## Problem Statement

Given a string s which contains only lower alphabetic characters, check if it is possible to remove at most one character from this string in such a way that the frequency of each distinct character becomes the same in the string. Return true if it is possible to do else return false.

### Example 1:

Input: `s = "xyyz"`
Output: `1`
Explanation: Removing one 'y' will make the frequency of each character 1.

### Example 2:

Input: `s = "xxxxyyzz"`
Output: `0`
Explanation: Frequency cannot be made the same by removing at most one character.

### Constraints:

1 <= |s| <= 10^5

## Approach

To solve this problem, we can iterate through the string and count the frequency of each character. Then, we can check if all frequencies are the same or if there is at most one character with a frequency that differs by exactly one from the other characters.

## Implementation

The solution to this problem can be found in the `solution.cpp` file provided in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.


