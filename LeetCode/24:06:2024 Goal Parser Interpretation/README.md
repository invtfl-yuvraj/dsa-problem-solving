# Goal Parser Interpretation

## Problem Statement

You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of the command.

## Examples

**Example 1:**

**Input:**
command = "G()(al)"

**Output:**
"Goal"

**Explanation:**
The Goal Parser interprets the command as follows:
- G -> G
- () -> o
- (al) -> al

The final concatenated result is "Goal".

**Example 2:**

**Input:**
command = "G()()()()(al)"

**Output:**
"Gooooal"

**Example 3:**

**Input:**
command = "(al)G(al)()()G"

**Output:**
"alGalooG"


## Constraints

- `1 <= command.length <= 100`
- `command` consists of "G", "()", and/or "(al)" in some order.

## Approach

1. Initialize an empty result string.
2. Traverse the input string:
   - If the character is 'G', append "G" to the result.
   - If the substring starting from the current position is "()", append "o" to the result and move the pointer by 2 positions.
   - If the substring starting from the current position is "(al)", append "al" to the result and move the pointer by 4 positions.
3. Return the result string.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
