# Bus Conductor

## Problem Statement

You are the conductor of a bus. There are `n` chairs and `n` passengers in the bus. You are given an array `chairs` of length `n`, where `chairs[i]` is the position of the `i-th` chair. You are also given the array `passengers` of length `n`, where `passengers[j]` is the position of the `j-th` passenger.

You may perform the following move any number of times:
- Increase or decrease the position of the `i-th` passenger by 1 (i.e., moving the `i-th` passenger from position `x` to `x + 1` or `x - 1`).

Return the minimum number of moves required to move each passenger to a chair such that no two passengers are in the same chair and every passenger gets a chair.

Note that there may be multiple chairs or passengers in the same position at the beginning.

## Examples

**Example 1:**

**Input:**
chairs = [3, 1, 5]
passengers = [2, 7, 4]

**Output:**
4

**Explanation:**
- The first passenger is moved from position 2 to position 1 using 1 move.
- The second passenger is moved from position 7 to position 5 using 2 moves.
- The third passenger is moved from position 4 to position 3 using 1 move.
- In total, 1 + 2 + 1 = 4 moves were used.

**Example 2:**

**Input:**
chairs = [2, 2, 6, 6]
passengers = [1, 3, 2, 6]

**Output:**
4


**Explanation:**
- The first passenger is moved from position 1 to position 2 using 1 move.
- The second passenger is moved from position 3 to position 6 using 3 moves.
- The third passenger is not moved.
- The fourth passenger is not moved.
- In total, 1 + 3 + 0 + 0 = 4 moves were used.

## Constraints

- \( n == chairs.length == passengers.length \)
- \( 1 \leq n \leq 10^5 \)
- \( 1 \leq chairs[i], passengers[j] \leq 100 \)

## Approach

1. **Sort the Arrays:** Sort both the `chairs` and `passengers` arrays.
2. **Calculate Moves:** Iterate through the sorted arrays and calculate the sum of absolute differences between corresponding elements.
3. **Return the Result:** Return the total number of moves.

The reason this approach works is that sorting minimizes the total distance because each passenger will be as close as possible to a chair.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp