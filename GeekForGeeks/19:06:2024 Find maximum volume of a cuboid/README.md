# Find Maximum Volume of a Cuboid

## Problem Statement
You are given a perimeter and the area. Your task is to return the maximum volume that can be made in the form of a cuboid from the given perimeter and surface area.

Note: Round off to 2 decimal places and for the given parameters, it is guaranteed that an answer always exists.

## Examples

**Example 1:**
**Input:** perimeter = 22, area = 15
**Output:** 3.02
**Explanation:** The maximum attainable volume of the cuboid is 3.02

**Example 2:**
**Input:** perimeter = 20, area = 5
**Output:** 0.33
**Explanation:** The maximum attainable volume of the cuboid is 0.33

## Constraints
- 1 ≤ perimeter ≤ 10^9
- 1 ≤ area ≤ 10^9

## Approach
1. **Formula Derivation**:
   - The perimeter \( P \) of a cuboid with sides \( a, b, c \) is given by \( 4(a + b + c) = P \).
   - The surface area \( A \) is given by \( 2(ab + bc + ca) = A \).
   - We need to find the maximum volume \( V = abc \).

2. **Solving for Volume**:
   - Express \( c \) in terms of \( a \) and \( b \) using the perimeter formula.
   - Substitute \( c \) in the surface area formula and solve for \( c \).
   - Calculate the volume \( V = abc \).

3. **Optimization**:
   - Since we are dealing with cubic equations, we can use numerical methods to optimize the calculation of the maximum volume.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp