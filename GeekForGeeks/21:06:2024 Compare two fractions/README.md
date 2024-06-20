
# Compare two fractions

## Problem Statement

You are given a string `str` containing two fractions `a/b` and `c/d`, compare them and return the greater. If they are equal, then return "equal". The string `str` contains "a/b, c/d" (fractions are separated by comma(,) & space( )).

## Examples

**Input:** `str = "5/6, 11/45"`

**Output:** `5/6`

**Explanation:** 
5/6 = 0.8333 and 11/45 = 0.2444, so 5/6 is greater fraction.

**Input:** `str = "8/1, 8/1"`

**Output:** `equal`

**Explanation:** 
Both fractions are the same, so we return "equal".

**Input:** `str = "10/17, 9/10"`

**Output:** `9/10`

**Explanation:** 
10/17 = 0.588 and 9/10 = 0.9, so the greater fraction is "9/10".

## Constraints

- 0 <= a, c <= 10^3
- 1 <= b, d <= 10^3

## Approach

To solve this problem,
- Split the input string `str` into two fractions.
- Convert each fraction into a floating-point number (`a/b` becomes `float(a) / float(b)`).
- Compare the two floating-point values.
- Return the corresponding fraction or "equal" based on the comparison.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp