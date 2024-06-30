# Taxi Booking

## Problem Statement

You are going to book a taxi. There are an infinite number of points 1, 2, 3... on the X axis and your current position is `cur`. There are `N` Taxis near you, and the position of those taxis is given as an array `pos`. Where `pos[i]` denotes the position of the `i-th` taxi. You are also given an array `time`. Where `time[i]` denotes the time taken by the `i-th` taxi to cover 1 unit of distance. Your task is to find the minimum time to board a taxi.

## Examples

**Example 1:**

**Input:**
N = 3, cur = 4
pos = [1, 5, 6]
time = [2, 3, 1]

**Output:**
2

**Explanation:**
- Total time taken by the 1st taxi will be: \((4-1) * 2 = 6\)
- Total time taken by the 2nd taxi will be: \((5-4) * 3 = 3\)
- Total time taken by the 3rd taxi will be: \((6-4) * 1 = 2\)
- So, the minimum time will be 2 seconds.

**Example 2:**

**Input:**
N = 2, cur = 1
pos = [1, 6]
time = [10, 3]

**Output:**
0


**Explanation:**
- Total time taken by the 1st taxi will be: \((1-1) * 10 = 0\)
- Total time taken by the 2nd taxi will be: \((6-1) * 3 = 15\)
- So, the minimum time will be 0 seconds.

## Constraints

- \( 1 \leq N \leq 10^5 \)
- \( 1 \leq cur \leq 10^5 \)
- \( 1 \leq pos[i] \leq 10^5 \)
- \( 1 \leq time[i] \leq 10^3 \)

## Approach

1. **Initialize Minimum Time:** Start with a large value for the minimum time.
2. **Iterate through Each Taxi:** For each taxi, calculate the time taken to reach the current position.
3. **Calculate Time:** Use the formula: \( \text{time\_taken} = \text{abs}(\text{pos}[i] - \text{cur}) \times \text{time}[i] \)
4. **Update Minimum Time:** If the calculated time is less than the current minimum time, update the minimum time.
5. **Return Result:** After iterating through all taxis, return the minimum time.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp