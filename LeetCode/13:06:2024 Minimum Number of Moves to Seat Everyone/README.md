# Minimum Number of Moves to Seat Everyone

## Problem Statement
There are n seats and n students in a room. You are given an array `seats` of length n, where `seats[i]` is the position of the ith seat. You are also given the array `students` of length n, where `students[j]` is the position of the jth student.

You may perform the following move any number of times:
- Increase or decrease the position of the ith student by 1 (i.e., moving the ith student from position x to x + 1 or x - 1).

Return the minimum number of moves required to move each student to a seat such that no two students are in the same seat.

Note that there may be multiple seats or students in the same position at the beginning.

## Example 1
**Input:**
seats = [3,1,5], students = [2,7,4]
**Output:**
4

**Explanation:**
The students are moved as follows:
- The first student is moved from position 2 to position 1 using 1 move.
- The second student is moved from position 7 to position 5 using 2 moves.
- The third student is moved from position 4 to position 3 using 1 move.

In total, 1 + 2 + 1 = 4 moves were used.

## Example 2
**Input:**
seats = [4,1,5,9], students = [1,3,2,6]
**Output:**
7

**Explanation:**
The students are moved as follows:
- The first student is not moved.
- The second student is moved from position 3 to position 4 using 1 move.
- The third student is moved from position 2 to position 5 using 3 moves.
- The fourth student is moved from position 6 to position 9 using 3 moves.

In total, 0 + 1 + 3 + 3 = 7 moves were used.

## Example 3
**Input:**
seats = [2,2,6,6], students = [1,3,2,6]
**Output:**
4

**Explanation:**
Note that there are two seats at position 2 and two seats at position 6.
The students are moved as follows:
- The first student is moved from position 1 to position 2 using 1 move.
- The second student is moved from position 3 to position 6 using 3 moves.
- The third student is not moved.
- The fourth student is not moved.

In total, 1 + 3 + 0 + 0 = 4 moves were used.

## Constraints
- n == seats.length == students.length
- 1 <= n <= 100
- 1 <= seats[i], students[j] <= 100

## Approach
1. **Sort the arrays**: Sort both the `seats` and `students` arrays.
2. **Calculate the total moves**: For each pair of sorted seats and students, calculate the absolute difference in their positions to get the number of moves required.

## Steps
1. Sort the `seats` array.
2. Sort the `students` array.
3. Initialize a variable `total_moves` to 0.
4. Iterate through the sorted arrays and sum up the absolute differences between corresponding elements in `seats` and `students`.
5. Return `total_moves`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp