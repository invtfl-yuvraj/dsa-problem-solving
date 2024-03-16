# Generalized Fibonacci Numbers

## Problem Statement

Consider the generalized Fibonacci number `g`, which is dependent on `a`, `b`, and `c` as follows:
`g(1) = 1`, `g(2) = 1`. For any other number `n`, `g(n) = a*g(n-1) + b*g(n-2) + c`.

For a given value of `m`, determine `g(n)%m`.

### Example 1:

Input:
a = 3
b = 3
c = 3
n = 3
m = 5
Output:
4
Explanation:
g(1) = 1 and g(2) = 1 
g(3) = 3*g(2) + 3*g(1) + 3 = 3*1 + 3*1 + 3 = 9
We need to return the answer modulo 5, so 9%5 = 4, is the answer.

### Example 2:

Input:
a = 2
b = 2
c = 2
n = 4
m = 100
Output:
16
Explanation:
g(1) = 1 and g(2) = 1
g(3) = 2*g(2) + 2*g(1) + 2 = 2*1 + 2*1 + 2 = 6
g(4) = 2*g(3) + 2*g(2) + 2  = 2*6 + 2*1 + 2 = 16
We need to return the answer modulo 100, so 16%100 = 16, is the answer.

## Approach

To solve this problem efficiently, we can use matrix exponentiation to calculate the value of `g(n)`. By representing the recurrence relation as a matrix, we can raise this matrix to the power of `n-2` to get the `n`-th Fibonacci number.

## Implementation

The solution to this problem can be found in the `solution.cpp` file provided in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.


