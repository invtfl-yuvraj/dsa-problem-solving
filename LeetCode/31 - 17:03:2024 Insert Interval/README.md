# Insert Interval

## Problem Statement

You are given an array of non-overlapping intervals `intervals` where `intervals[i] = [starti, endi]` represent the start and the end of the `i-th` interval and `intervals` is sorted in ascending order by `starti`. You are also given an interval `newInterval = [start, end]` that represents the start and end of another interval.

Insert `newInterval` into `intervals` such that `intervals` is still sorted in ascending order by `starti` and `intervals` still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return `intervals` after the insertion.

Note that you don't need to modify `intervals` in-place. You can make a new array and return it.

### Example 1:

**Input:**  
intervals = `[[1,3],[6,9]]`, newInterval = `[2,5]`

**Output:**  
`[[1,5],[6,9]]`

### Example 2:

**Input:**  
intervals = `[[1,2],[3,5],[6,7],[8,10],[12,16]]`, newInterval = `[4,8]`

**Output:**  
`[[1,2],[3,10],[12,16]]`

**Explanation:**  
Because the new interval `[4,8]` overlaps with `[3,5],[6,7],[8,10]`.

## Constraints

- 0 <= intervals.length <= 10^4
- intervals[i].length == 2
- 0 <= starti <= endi <= 10^5
- `intervals` is sorted by `starti` in ascending order.
- newInterval.length == 2
- 0 <= start <= end <= 10^5

## Approach

To insert `newInterval` into `intervals`, and merge any overlapping intervals, we can use a straightforward approach:

1. Initialize an empty list to store the merged intervals.
2. Iterate over each interval in the input list `intervals` and handle it in the following manner:
    - If the current interval ends before the new interval starts, add the current interval to the merged list.
    - If the current interval starts after the new interval ends, add the new interval to the merged list and update `newInterval` to the current interval.
    - If the current interval and the new interval overlap, merge them by updating the start and end of the new interval to encompass both.
3. After iterating through all intervals, add the final `newInterval` if it has not been added already.
4. Return the merged list of intervals.

This approach allows us to maintain the sorted order of the intervals while also handling overlaps efficiently.

## Implementation

The solution to this problem can be implemented in the `insertInterval()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `insertInterval()` function in your Python code.
3. Call the `insertInterval()` function with the intervals list and the new interval as input to insert the new interval and return the merged intervals list.


