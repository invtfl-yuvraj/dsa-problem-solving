# Find the N-th Character

## Problem Statement

Given a binary string s. Perform r iterations on string s, where in each iteration 0 becomes 01 and 1 becomes 10. Find the nth character (considering 0-based indexing) of the string after performing these r iterations.

### Example 1:

Input:
s = "1100"
r = 2
n = 3
Output:
1
Explanation: 
After 1st iteration, s becomes "10100101".
After 2nd iteration, s becomes "1001100101100110".
Now, we can clearly see that the character at the 3rd index is 1, and so the output.

### Example 2:

Input:
s = "1010"
r = 1
n = 2
Output:
0
Explanation: 
After 1st iteration, s becomes "10011001".
Now, we can clearly see that the character at the 2nd index is 0, and so the output.

### Constraints:

- 1 ≤ |s| ≤ 10^3
- 1 ≤ r ≤ 20
- 0 ≤ n < |s|

## Approach

To solve this problem, we need to simulate the iterations on the binary string `s`. We can do this by iterating through each character of `s` and performing the required transformation according to the given rules. After `r` iterations, we can return the `n`-th character of the resulting string.

## Implementation

The solution to this problem can be found in the `solution.cpp` file provided in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.


