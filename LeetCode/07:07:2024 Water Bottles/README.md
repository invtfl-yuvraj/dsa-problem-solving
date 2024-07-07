# Water Bottles

## Problem Statement

You have `numBottles` water bottles that are initially full of water. You can exchange `numExchange` empty water bottles for one full water bottle. Drinking a full water bottle turns it into an empty bottle. Given two integers `numBottles` and `numExchange`, return the maximum number of water bottles you can drink.

## Examples

### Example 1:
**Input:**
numBottles = 9, numExchange = 3

**Output:**
13

**Explanation:**
You can exchange 3 empty bottles to get 1 full water bottle. Number of water bottles you can drink: 9 + 3 + 1 = 13.

### Example 2:
**Input:**
numBottles = 15, numExchange = 4

**Output:**
19

**Explanation:**
You can exchange 4 empty bottles to get 1 full water bottle. Number of water bottles you can drink: 15 + 3 + 1 = 19.


## Constraints:
- \(1 \leq numBottles \leq 100\)
- \(2 \leq numExchange \leq 100\)

## Approach

1. **Initialization:**
   - Start with `numBottles` full bottles.
   - Initialize `totalDrank` to `numBottles` because you will drink all initially full bottles.

2. **Exchange Loop:**
   - While you have enough empty bottles to exchange for a full one:
     - Calculate the number of new full bottles you can get by exchanging empty ones.
     - Add these new full bottles to `totalDrank`.
     - Update the count of empty bottles by subtracting the used empty bottles and adding the newly emptied bottles.

3. **Termination:**
   - The loop terminates when you no longer have enough empty bottles to exchange for a full one.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp