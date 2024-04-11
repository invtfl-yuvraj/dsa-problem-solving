# Minimum Number of Arrows to Burst Balloons

## Problem Statement

There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D integer array `points` where `points[i] = [xstart, xend]` denotes a balloon whose horizontal diameter stretches between `xstart` and `xend`. You do not know the exact y-coordinates of the balloons.

Arrows can be shot directly vertically (in the positive y-direction) from different points along the x-axis. A balloon with `xstart` and `xend` is burst by an arrow shot at `x` if `xstart <= x <= xend`. There is no limit to the number of arrows that can be shot. A shot arrow keeps traveling up infinitely, bursting any balloons in its path.

Given the array `points`, return the minimum number of arrows that must be shot to burst all balloons.

### Example 1:

**Input:**  
points = `[[10,16],[2,8],[1,6],[7,12]]`

**Output:**  
2

**Explanation:**  
The balloons can be burst by 2 arrows:
- Shoot an arrow at `x = 6`, bursting the balloons `[2,8]` and `[1,6]`.
- Shoot an arrow at `x = 11`, bursting the balloons `[10,16]` and `[7,12]`.

### Example 2:

**Input:**  
points = `[[1,2],[3,4],[5,6],[7,8]]`

**Output:**  
4

**Explanation:**  
One arrow needs to be shot for each balloon for a total of 4 arrows.

### Example 3:

**Input:**  
points = `[[1,2],[2,3],[3,4],[4,5]]`

**Output:**  
2

**Explanation:**  
The balloons can be burst by 2 arrows:
- Shoot an arrow at `x = 2`, bursting the balloons `[1,2]` and `[2,3]`.
- Shoot an arrow at `x = 4`, bursting the balloons `[3,4]` and `[4,5]`.

## Constraints

- 1 <= points.length <= 10^5
- points[i].length == 2
- -2^31 <= xstart < xend <= 2^31 - 1

## Approach

To solve the problem of determining the minimum number of arrows required to burst all the balloons, we can follow these steps:

1. **Sort the Balloons:** Sort the array of balloons (`points`) based on their end point (`xend`) in ascending order.

2. **Determine Overlaps:** Initialize a counter for the number of arrows needed, and keep track of the position of the last arrow shot. Iterate through the sorted list of balloons. For each balloon, if it starts after the last arrow position, we increment the counter and update the last arrow position to the end point of the current balloon.

3. **Return Result:** At the end of the iteration, the counter will contain the minimum number of arrows needed to burst all the balloons.

This approach ensures the balloons are handled in a sorted order and overlapping balloons can be burst with a single arrow.

## Implementation

The solution to this problem can be implemented in the `findMinArrowShots()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `findMinArrowShots()` function in your Python code.
3. Call the `findMinArrowShots()` function with the `points` array as input to determine the minimum number of arrows needed to burst all balloons.


