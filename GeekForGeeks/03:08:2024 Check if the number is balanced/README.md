# Check if the Number is Balanced

## Problem Statement

Given an integer `N` which has an odd number of digits, find whether the given number is balanced or not. An odd-digit number is called a balanced number if the sum of all digits to the left of the middle digit and the sum of all digits to the right of the middle digit is equal.

## Examples

**Example 1:**

**Input:**  
N = "1234006"

**Output:**  
1

**Explanation:**  
Total number of digits in `N` is 7. The middle digit is 4. LHS (Left Hand Side) = 1 + 2 + 3 = 6 and RHS (Right Hand Side) = 0 + 0 + 6 = 6. LHS is equal to RHS.

**Example 2:**

**Input:**  
N = "12345"

**Output:**  
0

**Explanation:**  
LHS = 1 + 2 = 3 and RHS = 4 + 5 = 9. LHS and RHS are not equal.

## Constraints

- `1 <= N <= 10^100`
- `N` will always have an odd number of digits.
- Since `N` can be very large, it is given as a string.

## Expected Time Complexity

- O(number of digits in `N`)

## Expected Auxiliary Space

- O(1)

## Approach

1. **Identify the Middle Index**: Calculate the middle index of the string representing the number.
2. **Initialize Sums**: Initialize sums for the left-hand side (LHS) and right-hand side (RHS).
3. **Sum Calculation**: 
   - Iterate through the digits to the left of the middle digit and sum them up to get LHS.
   - Iterate through the digits to the right of the middle digit and sum them up to get RHS.
4. **Comparison**: Compare LHS and RHS:
   - If LHS equals RHS, the number is balanced.
   - Otherwise, it is not balanced.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
       
