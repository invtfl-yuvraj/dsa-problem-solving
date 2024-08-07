# Count Even Substrings

## Problem Statement

Given a string of digits 0–9, the task is to count the number of substrings which, when converted into integer, form an even number.

## Examples

**Example 1:**

**Input:**  
s = "1234"

**Output:**  
6

**Explanation:**  
"2", "4", "12", "34", "234", "1234" are 6 substrings which are even.

**Example 2:**

**Input:**  
s = "154"

**Output:**  
3

**Explanation:**  
"154", "54", "4" are the even substrings.

## Constraints

- 1 ≤ |S| ≤ 10^5

## Expected Time Complexity

- O(|S|)

## Expected Auxiliary Space

- O(1)

## Approach

To solve this problem efficiently, we can use the observation that a substring is even if and only if its last digit is even. Therefore, for each digit in the string, if it is even, it will contribute to several substrings ending at that digit. Specifically, if the digit at index `i` is even, it will be the last digit of `(i + 1)` substrings.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp