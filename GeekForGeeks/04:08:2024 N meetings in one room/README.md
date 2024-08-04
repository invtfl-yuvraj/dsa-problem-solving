# N Meetings in One Room

## Problem Statement

You are given timings of `n` meetings in the form of `(start[i], end[i])` where `start[i]` is the start time of meeting `i` and `end[i]` is the finish time of meeting `i`. Return the maximum number of meetings that can be accommodated in a single meeting room, when only one meeting can be held in the meeting room at a particular time.

**Note:** The start time of one chosen meeting can't be equal to the end time of the other chosen meeting.

## Examples

**Example 1:**

**Input:**  
n = 6  
start[] = [1, 3, 0, 5, 8, 5]  
end[] = [2, 4, 6, 7, 9, 9]

**Output:**  
4

**Explanation:**  
Maximum four meetings can be held with given start and end timings. The meetings are - (1, 2), (3, 4), (5, 7), and (8, 9).

**Example 2:**

**Input:**  
n = 3  
start[] = [10, 12, 20]  
end[] = [20, 25, 30]

**Output:**  
1

**Explanation:**  
Only one meeting can be held with given start and end timings.

## Constraints

- `1 ≤ n ≤ 10^5`
- `0 ≤ start[i] < end[i] ≤ 10^6`

## Expected Time Complexity

- O(n * log(n))

## Expected Auxiliary Space

- O(n)

## Approach

1. **Pairing and Sorting**: 
   - Pair each start time with its corresponding end time.
   - Sort the meetings based on their end times.
2. **Selecting Meetings**:
   - Iterate through the sorted meetings and select the meeting if its start time is greater than the end time of the last selected meeting.
3. **Count Maximum Meetings**:
   - Count the maximum number of non-overlapping meetings that can be held.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp