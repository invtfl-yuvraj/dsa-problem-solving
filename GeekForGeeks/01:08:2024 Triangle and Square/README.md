# Triangle and Square

## Problem Statement

Geek has a ticket to the Geek Summer Carnival. The ticket has a positive integer `B` written on it. `B` denotes the base of a right-angled isosceles triangle. Geek can avail discounts on `X` courses in the carnival.

`X` is the maximum number of squares of size 2x2 units that can fit in the given right-angled isosceles triangle. Find `X`.

## Examples

**Example 1:**

**Input:**  
B = 8

**Output:**  
6

**Explanation:**  
A right-angled isosceles triangle with a base of 8 can contain a maximum of 6 squares of size 2x2.

**Example 2:**

**Input:**  
B = 2

**Output:**  
0

**Explanation:**  
A right-angled isosceles triangle with a base of 2 cannot contain any squares of size 2x2.

## Constraints

- `2 <= B <= 10^9`
- `B` is even.

## Expected Time Complexity

- O(1)

## Expected Auxiliary Space

- O(1)

## Approach

1. **Observations**:
   - The given triangle is a right-angled isosceles triangle with a base of length `B`.
   - For a square of size 2x2 to fit, the base of the triangle must be at least 2 units.
   - The side of each square is 2 units.
   - The largest triangle with a base `B` can be divided into smaller triangles, each containing squares of side 2 units.

2. **Calculation**:
   - The maximum number of 2x2 squares that can fit in the triangle can be calculated using the formula:
   \[
   \text{number of squares} = \frac{B}{2} \times (\frac{B}{2} - 1) / 2
   \]
   - This formula counts the number of squares that can fit in the triangle layer by layer.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp