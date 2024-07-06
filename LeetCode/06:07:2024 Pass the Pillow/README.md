# Pass the Pillow

## Problem Statement

There are \( n \) people standing in a line labeled from 1 to \( n \). The first person in the line is holding a pillow initially. Every second, the person holding the pillow passes it to the next person standing in the line. Once the pillow reaches the end of the line, the direction changes, and people continue passing the pillow in the opposite direction.

For example, once the pillow reaches the \( n \)th person, they pass it to the \( n-1 \)th person, then to the \( n-2 \)th person, and so on.

Given the two positive integers \( n \) and \( time \), return the index of the person holding the pillow after \( time \) seconds.

## Examples

### Example 1:
**Input:**
n = 4, time = 5

**Output:**
2

**Explanation:**
People pass the pillow in the following way: 1 -> 2 -> 3 -> 4 -> 3 -> 2.
After five seconds, the 2nd person is holding the pillow.


### Example 2:
**Input:**
n = 3, time = 2

**Output:**
3

**Explanation:**
People pass the pillow in the following way: 1 -> 2 -> 3.
After two seconds, the 3rd person is holding the pillow.


## Constraints
- \( 2 \leq n \leq 1000 \)
- \( 1 \leq time \leq 1000 \)

## Approach

1. **Understanding the Movement:**
   - The pillow moves forward until it reaches the last person (person \( n \)).
   - After reaching person \( n \), the pillow starts moving backward.
   - This forward and backward movement continues.

2. **Calculating the Position:**
   - The key is to simulate the passing of the pillow by computing the net movement within the total time given.
   - By keeping track of the direction (forward or backward), we can determine the final position of the pillow.

3. **Modulo Arithmetic:**
   - By using modulo arithmetic, we can simplify the problem to find the effective position after the given time.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp