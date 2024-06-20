# Magnetic Force Between Two Balls

## Problem Statement

In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has n empty baskets, the ith basket is at position[i], Morty has m balls and needs to distribute the balls into the baskets such that the minimum magnetic force between any two balls is maximum.

Rick stated that magnetic force between two different balls at positions x and y is |x - y|.

Given the integer array `position` and the integer `m`, return the required force.

## Example

**Input:**
position = [1,2,3,4,7], m = 3

**Output:**
3


**Explanation:**
Distributing the 3 balls into baskets 1, 4 and 7 will make the magnetic force between ball pairs [3, 3, 6]. The minimum magnetic force is 3. We cannot achieve a larger minimum magnetic force than 3.

## Constraints

- 2 <= n <= 10^5
- 1 <= position[i] <= 10^9
- All integers in position are distinct.
- 2 <= m <= n

## Approach

To solve this problem,
- Sort the array of basket positions.
- Use binary search to find the maximum possible minimum magnetic force (`minDist`) between balls.
- Check if it's possible to distribute `m` balls such that the minimum distance between any two balls is at least `minDist`.

## Steps

1. Sort the `position` array.
2. Define a binary search range for `minDist` between 1 and `position.back() - position.front()`.
3. Use a helper function to determine if it's feasible to place `m` balls such that the minimum distance between any two balls is at least `minDist`.
4. Adjust the binary search bounds based on whether it's feasible to achieve the `minDist`.
5. Return the maximum `minDist` found.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
