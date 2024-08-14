# Count Alphabets

## Problem Statement

Given a string `S`, the task is to count the number of alphabets present in the string.

## Examples

### Example 1:
**Input:**  
S = "adjfjh23"

**Output:**  
6

**Explanation:**  
The first six characters are alphabets. Only the last two characters (`2` and `3`) are not alphabets.

### Example 2:
**Input:**  
S = "n0ji#k$"

**Output:**  
4

**Explanation:**  
In the string, `n`, `j`, `i`, and `k` are alphabets. The characters `0`, `#`, and `$` are not alphabets.

## Constraints
- `1 ≤ |S| ≤ 10^5`
- `S` contains only upper and lower case alphabets, digits, and the characters '#', '!', '$', '&'.

## Expected Time Complexity
- `O(|S|)`

## Expected Auxiliary Space
- `O(1)`

## Approach

The problem is straightforward and involves iterating over each character in the string and checking if it is an alphabet. We can achieve this by using the `isalpha()` method in Python, which returns `True` if the character is an alphabet (either uppercase or lowercase).

### Steps:
1. Initialize a counter to zero.
2. Iterate over each character in the string `S`.
3. For each character, check if it is an alphabet using the `isalpha()` method.
4. If it is an alphabet, increment the counter.
5. After the loop, return the counter as the result.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
