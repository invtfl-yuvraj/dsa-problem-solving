# Find the Winner of the Circular Game

## Problem Statement

There are `n` friends playing a game, sitting in a circle, and numbered from `1` to `n` in clockwise order. The rules of the game are as follows:
1. Start at the 1st friend.
2. Count the next `k` friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
3. The last friend you counted leaves the circle and loses the game.
4. If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
5. Else, the last friend in the circle wins the game.

Given the number of friends `n` and an integer `k`, return the winner of the game.

## Examples

### Example 1:
**Input:**
n = 5, k = 2

**Output:**
3

**Explanation:**
Here are the steps of the game:

Start at friend 1.
Count 2 friends clockwise, which are friends 1 and 2.
Friend 2 leaves the circle. Next start is friend 3.
Count 2 friends clockwise, which are friends 3 and 4.
Friend 4 leaves the circle. Next start is friend 5.
Count 2 friends clockwise, which are friends 5 and 1.
Friend 1 leaves the circle. Next start is friend 3.
Count 2 friends clockwise, which are friends 3 and 5.
Friend 5 leaves the circle. Only friend 3 is left, so they are the winner.


### Example 2:
**Input:**
n = 6, k = 5

**Output:**
1

**Explanation:**
The friends leave in this order: 5, 4, 6, 2, 3. The winner is friend 1.


## Constraints:
- \(1 \leq k \leq n \leq 500\)

## Follow-up:
Could you solve this problem in linear time with constant space?

## Approach

This problem is a variation of the Josephus problem. The Josephus problem is a theoretical problem related to a certain elimination game.

### Iterative Solution

1. Initialize the winner's position for one person to be 0.
2. Iterate from 2 to n to update the winner's position using the formula:
   \[
   J(i, k) = (J(i-1, k) + k) \% i
   \]
3. Since we are using 0-based indexing, the final result should be converted to 1-based by adding 1.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
