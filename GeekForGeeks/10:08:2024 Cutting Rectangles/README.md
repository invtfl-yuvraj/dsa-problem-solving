# Cutting Rectangles

## Problem Statement

Given a rectangle of dimensions `L x B`, find the minimum number `N` of identical squares with maximum side `K` that can be cut out from the rectangle such that no residue remains. The function should return `N` and `K`.

## Examples

### Example 1:
**Input:**  
L = 2, B = 4

**Output:**  
N = 2, K = 2

**Explanation:**  
2 squares of `2x2` dimensions can be cut from the rectangle.

### Example 2:
**Input:**  
L = 6, B = 3

**Output:**  
N = 2, K = 3

**Explanation:**  
2 squares of `3x3` dimensions can be cut from the rectangle.

## Constraints
- `1 ≤ L, B ≤ 10^9`

## Expected Time Complexity
- `O(log(min(L, B)))`

## Expected Auxiliary Space
- `O(1)`

## Approach

The largest possible square that can be used to tile the rectangle without leaving any residue will have a side length equal to the greatest common divisor (GCD) of `L` and `B`. 

1. **Finding the Maximum Side Length (`K`)**:
   - The side length `K` of the largest square will be `gcd(L, B)`.

2. **Calculating the Number of Squares (`N`)**:
   - The number of such squares will be the total area of the rectangle divided by the area of the square, i.e., `N = (L * B) / (K * K)`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp