# Remaining String

## Problem Statement

Given a string `s` without spaces, a character `ch`, and an integer `count`. Your task is to return the substring that remains after the character `ch` has appeared `count` number of times. Assume upper case and lower case alphabets are different. Return an empty string `""` if it is not possible, or the remaining substring is empty.

## Examples

### Example 1:
**Input:**
s = "Thisisdemostring"
ch = 'i'
count = 3

**Output:**
"ng"

**Explanation:**
The remaining substring of s after the 3rd occurrence of 'i' is "ng".

### Example 2:
**Input:**
s = "Thisisdemostri"
ch = 'i'
count = 3

**Output:**
""

**Explanation:**
The 3rd occurrence of 'i' is at the last index. In this case, the remaining substring is empty.

### Example 3:
**Input:**
s = "abcd"
ch = 'x'
count = 2

**Output:**
""
**Explanation:**
The character 'x' is not present in the string.

## Constraints:
- 1 ≤ s.length() ≤ 10^5
- 1 ≤ count ≤ s.length()
- s[i] is both upper case and lower case

## Expected Time Complexity:
O(|s|)

## Expected Auxiliary Space:
O(1)

## Approach

To solve this problem, we can follow these steps:

1. Initialize a counter to zero to keep track of the occurrences of `ch`.
2. Iterate over the string `s` and increment the counter each time `ch` is encountered.
3. Once the counter reaches `count`, return the substring from the next index to the end of the string.
4. If the loop completes and the counter hasn't reached `count`, return an empty string.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the convertToZigZag() function in your C++ code.
2. Call the convertToZigZag() function with the array arr as input to convert the array into a zig-zag fashion.