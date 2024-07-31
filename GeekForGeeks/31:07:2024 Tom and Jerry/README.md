# Tom and Jerry Game

## Problem Statement

Tom and Jerry decide to play a game. Given an integer `N`, on each player's turn, that player makes a move by subtracting a divisor of the current `N` (which is less than `N`) from `N`, thus forming a new `N` for the next turn. The player who cannot make a move (i.e., has no divisor left to subtract) loses the game.

The game begins with Tom playing the first move. Both Tom and Jerry play optimally. Determine who wins the game. Return `1` if Tom wins, otherwise return `0`.

## Examples

**Example 1:**

**Input:**  
N = 2

**Output:**  
1

**Explanation:**  
Tom subtracts 1 from `N` to make `N = 1`. Jerry cannot make a move, so Tom wins.

**Example 2:**

**Input:**  
N = 4

**Output:**  
1

**Explanation:**  
1. Tom subtracts 1 from `N` (since 1 is a divisor of 4) to make `N = 3`.
2. Jerry subtracts 1 from `N` (since 1 is the only divisor of 3 less than 3) to make `N = 2`.
3. Tom subtracts 1 from `N` (since 1 is the only divisor of 2 less than 2) to make `N = 1`.
4. Jerry cannot make a move. So, Tom wins.

## Constraints

- `1 < N ≤ 10^8`

## Expected Time Complexity

- O(1)

## Expected Auxiliary Space

- O(1)

## Approach

1. The game revolves around the property of the number `N`.
2. If `N` is even, Tom can always reduce `N` to an odd number (by subtracting 1). This way, Tom will always hand an odd `N` to Jerry.
3. If `N` is odd, then the only possible divisor less than `N` is 1, which leads to the next number being even.
4. The player starting with an odd `N` loses, and the player starting with an even `N` wins.
5. Since Tom always starts, he wins if `N` is even, and loses if `N` is odd.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp