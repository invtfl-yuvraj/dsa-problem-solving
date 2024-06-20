# Final Value of Variable After Performing Operations

## Problem Statement

There is a programming language with only four operations and one variable X:

- `++X` and `X++` increments the value of the variable X by 1.
- `--X` and `X--` decrements the value of the variable X by 1.

Initially, the value of X is 0.

Given an array of strings `operations` containing a list of operations, return the final value of X after performing all the operations.

## Example

**Input:**

operations = ["--X","X++","X++"]


**Output:**

1


**Explanation:**
The operations are performed as follows:
Initially, X = 0.
--X: X is decremented by 1, X = 0 - 1 = -1.
X++: X is incremented by 1, X = -1 + 1 = 0.
X++: X is incremented by 1, X = 0 + 1 = 1.

## Constraints

1 <= operations.length <= 100
operations[i] will be either "++X", "X++", "--X", or "X--".

## Approach

To solve this problem,
- Initialize X to 0.
- Iterate through each operation in the operations array.
- Update X based on the operation type (++X, X++, --X, X--).
- Return the final value of X after all operations are processed.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
