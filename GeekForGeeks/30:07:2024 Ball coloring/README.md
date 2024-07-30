# Ball Coloring

## Problem Statement

Given `n` balls, all initially uncolored, you need to color the balls with two colors: RED and BLUE. The coloring should be such that there are at most 2 positions where a RED ball is touching a BLUE ball or vice versa. You must color all the balls and find the number of ways in which the balls can be colored.

## Examples

**Example 1:**

**Input:**  
n = 1

**Output:**  
2

**Explanation:**  
Possible ways to color are {{R},{B}}. So the answer is 2.

**Example 2:**

**Input:**  
n = 2

**Output:**  
4

**Explanation:**  
Possible ways to color are {{RB},{BR},{RR},{BB}}. So the answer is 4.

## Constraints

- `1 <= n <= 10^5`

## Expected Time Complexity

- O(1)

## Expected Auxiliary Space

- O(1)

## Approach

1. For `n` balls, we can have the following types of configurations:
   - All balls are of one color (either all RED or all BLUE).
   - One contiguous segment of REDs and one contiguous segment of BLUEs, with at most one transition between RED and BLUE.
   
2. The number of ways to color the balls:
   - Two single-color configurations: all RED or all BLUE.
   - Two configurations where the transition occurs at different positions: one transition from RED to BLUE and another from BLUE to RED.
   - Thus, the total number of ways is 2 + 2 = 4 for `n > 1`.

3. Special case:
   - For `n = 1`, there are only two ways: RED or BLUE.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp