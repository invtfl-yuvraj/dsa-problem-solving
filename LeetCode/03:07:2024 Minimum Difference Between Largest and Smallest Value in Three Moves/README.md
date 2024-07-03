# Minimum Difference Between Largest and Smallest Value in Three Moves

## Problem Statement

You are given an integer array `nums`. In one move, you can choose one element of `nums` and change it to any value. Return the minimum difference between the largest and smallest value of `nums` after performing at most three moves.

## Examples

**Example 1:**

**Input:**
nums = [5, 3, 2, 4]


**Output:**
0


**Explanation:**
We can make at most 3 moves.
- In the first move, change 2 to 3. `nums` becomes [5, 3, 3, 4].
- In the second move, change 4 to 3. `nums` becomes [5, 3, 3, 3].
- In the third move, change 5 to 3. `nums` becomes [3, 3, 3, 3].
After performing 3 moves, the difference between the minimum and maximum is 3 - 3 = 0.

**Example 2:**

**Input:**
nums = [1, 5, 0, 10, 14]


**Output:**
1

**Explanation:**
We can make at most 3 moves.
- In the first move, change 5 to 0. `nums` becomes [1, 0, 0, 10, 14].
- In the second move, change 10 to 0. `nums` becomes [1, 0, 0, 0, 14].
- In the third move, change 14 to 1. `nums` becomes [1, 0, 0, 0, 1].
After performing 3 moves, the difference between the minimum and maximum is 1 - 0 = 1.

**Example 3:**

**Input:**
nums = [3, 100, 20]

**Output:**
0


**Explanation:**
We can make at most 3 moves.
- In the first move, change 100 to 7. `nums` becomes [3, 7, 20].
- In the second move, change 20 to 7. `nums` becomes [3, 7, 7].
- In the third move, change 3 to 7. `nums` becomes [7, 7, 7].
After performing 3 moves, the difference between the minimum and maximum is 7 - 7 = 0.

## Constraints

- \(1 \leq nums.length \leq 10^5\)
- \(-10^9 \leq nums[i] \leq 10^9\)

## Approach

1. **Sort the Array:** First, sort the array.
2. **Evaluate Scenarios:** Since we can make at most three changes, we need to consider the four possible scenarios of changing the largest or smallest values.
3. **Compute Differences:** Compute the difference between the maximum and minimum for the following scenarios:
   - Change the three largest values.
   - Change the two largest values and the smallest value.
   - Change the largest value and the two smallest values.
   - Change the three smallest values.
4. **Return the Minimum Difference:** The result is the minimum of these four computed differences.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp