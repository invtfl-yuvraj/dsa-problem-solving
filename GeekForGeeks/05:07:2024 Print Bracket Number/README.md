# Print Bracket Number

## Problem Statement

Given a string `str`, the task is to find the bracket numbers, i.e., for each bracket in `str`, return the number `i` if the bracket is the `i`th opening or closing bracket to appear in the string.

## Examples

**Example 1:**

**Input:**
str = "(aa(bdc))p(dee)"

**Output:**
1 2 2 1 3 3


**Explanation:**
The highlighted brackets in the given string `(aa(bdc))p(dee)` are assigned the numbers as: 1 2 2 1 3 3.

**Example 2:**

**Input:**
str = "(((()("


**Output:**
1 2 3 4 4 5


**Explanation:**
The highlighted brackets in the given string `(((()(` are assigned the numbers as: 1 2 3 4 4 5.

## Constraints

- \(1 \leq |str| \leq 10^5\)
- `str` contains lowercase English alphabets, and '(', ')' characters
- At any index, the number of opening brackets is greater than or equal to closing brackets

## Approach

1. **Initialize Counters:**
   - Use a counter to keep track of the current bracket number.
   - Use a stack to match each opening bracket with its corresponding closing bracket.

2. **Traverse the String:**
   - Iterate through each character in the string.
   - If the character is an opening bracket `(`, increment the counter, push the counter to the stack, and add the counter to the result list.
   - If the character is a closing bracket `)`, pop from the stack (which gives the correct bracket number) and add it to the result list.

3. **Result:**
   - The result list will contain the bracket numbers in the order they appear in the string.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp