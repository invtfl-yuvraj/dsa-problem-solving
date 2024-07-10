# Minimum Indexed Character

## Problem Statement

Given a string `str` and another string `patt`, find the minimum index of the character in `str` that is also present in `patt`.

## Examples

### Example 1:
**Input:**
str = "geeksforgeeks"
patt = "set"

**Output:**
1

**Explanation:**
'e' is the character which is present in given str "geeksforgeeks" and is also present in patt "set". The minimum index of 'e' is 1.

### Example 2:
**Input:**
str = "adcffaet"
patt = "onkl"

**Output:**
-1

**Explanation:**
There are none of the characters which are common in patt and str.


## Your Task:
You only need to complete the function `minIndexChar()` that returns the index of the answer in `str` or returns `-1` in case no character of `patt` is present in `str`.

## Constraints:
- \(1 \leq |str|, |patt| \leq 10^5\)
- `'a' \leq str[i], patt[i] \leq 'z'`

## Expected Time Complexity:
- O(N)

## Expected Auxiliary Space:
- O(Number of distinct characters)

## Approach

1. **Hash Set for Characters in `patt`**:
   - Create a set to store all characters in `patt`.
   
2. **Traverse `str` and Find Minimum Index**:
   - Traverse `str` and check each character against the set.
   - Return the index of the first character in `str` that is present in the set.
   
3. **If No Common Character Found**:
   - Return -1 if no characters of `patt` are present in `str`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the convertToZigZag() function in your C++ code.
2. Call the convertToZigZag() function with the array arr as input to convert the array into a zig-zag fashion.