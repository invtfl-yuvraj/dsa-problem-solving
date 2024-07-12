# Drive the Car

## Problem Statement

Suppose you are a car driver and you have to drive a car on a track divided into `N` number of sub-tracks. You are also given the value of `K`, which is the total kilometers the car can drive on each sub-track. If the car can't cover a sub-track, you can add any unit of petrol to it. With each unit of petrol added, the total kilometers your car can travel will increase by one unit. You have to return the minimum units of petrol that, if added to your car at each sub-track, will allow your car to cover all the sub-tracks. If no extra unit of petrol is required, return `-1`.

## Examples

### Example 1:

**Input:**
N = 5, K = 7
arr = [2, 5, 4, 5, 2]

**Output:**
-1

**Explanation:**
No extra petrol is required, as K is greater than all the elements in the array, hence -1.

### Example 2:

**Input:**
N = 5, K = 4
arr = [1, 6, 3, 5, 2]

**Output:**
2

**Explanation:**
You are given 5 sub-tracks with different kilometers. Your car can travel 4 km on each sub-track.
So, when you come to sub-track 2, you have to cover 6 km, so you need 2 units of petrol more to cover the distance.
For the 3rd sub-track, your car can travel 4 km, and you need 1 extra unit of petrol.
So if you add 2 units of petrol at each sub-track, you can cover all the sub-tracks.


## Your Task

You don't need to read input or print anything. Your task is to complete the function `required()` which takes the array `arr[]`, its size `n`, and an integer `k` as inputs and returns the minimum units of petrol your car requires to cover all the sub-tracks. If no extra unit of petrol is required, return `-1`.

## Expected Time Complexity

- O(N)

## Expected Auxiliary Space

- O(1)

## Constraints

- 1 ≤ N ≤ 10^5
- 1 ≤ K ≤ 10^18

## Approach

To determine the minimum units of petrol required:

1. Initialize `max_deficit` to `0`.
2. Iterate through each sub-track distance in `arr`.
3. Calculate the deficit as `distance - K`.
4. If `distance` is greater than `K`, update `max_deficit` to the maximum of `max_deficit` and `deficit`.
5. If `max_deficit` is `0`, return `-1` (no extra petrol required).
6. Otherwise, return `max_deficit`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Implement the convertToZigZag() function in your C++ code.
2. Call the convertToZigZag() function with the array arr as input to convert the array into a zig-zag fashion.