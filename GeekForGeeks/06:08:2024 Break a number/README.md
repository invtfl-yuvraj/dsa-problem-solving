# Break a Number

## Problem Statement

Given a really large number N, break it into 3 whole numbers such that they sum up to the original number and find the number of ways to do so. Since this number can be very large, return it modulo \(10^9 + 7\).

## Examples

**Example 1:**

**Input:**  
N = 2

**Output:**  
6

**Explanation:**  
Possible ways to break the number:  
0 + 0 + 2 = 2  
0 + 2 + 0 = 2  
2 + 0 + 0 = 2  
0 + 1 + 1 = 2  
1 + 1 + 0 = 2  
1 + 0 + 1 = 2  

**Example 2:**

**Input:**  
N = 3

**Output:**  
10

**Explanation:**  
Possible ways to break the number:  
0 + 0 + 3 = 3  
0 + 3 + 0 = 3  
3 + 0 + 0 = 3  
0 + 1 + 2 = 3  
0 + 2 + 1 = 3  
1 + 0 + 2 = 3  
1 + 2 + 0 = 3  
2 + 0 + 1 = 3  
2 + 1 + 0 = 3  
1 + 1 + 1 = 3  

## Constraints

- \(1 \leq N \leq 10^9\)

## Expected Time Complexity

- O(1)

## Expected Auxiliary Space

- O(1)

## Approach

The problem can be solved using combinatorial mathematics. The number of ways to break the number N into 3 parts is equivalent to the number of ways to distribute N identical items into 3 distinct bins, which is given by the formula:

\[
\text{Number of ways} = \binom{N + 3 - 1}{3 - 1} = \binom{N + 2}{2}
\]

The binomial coefficient \(\binom{N + 2}{2}\) can be computed as:

\[
\binom{N + 2}{2} = \frac{(N + 2) \times (N + 1)}{2}
\]

Given the constraints, the result should be returned modulo \(10^9 + 7\).

## Implementation
The solution is implemented in C++ in the `solution.cpp` file.

## How to Use
To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.
4. The program will prompt you to input the array for which you want to find the missing element.
5. The program will output the missing element.

###### Feel free to contribute improvements or alternative solutions by creating a pull request.



