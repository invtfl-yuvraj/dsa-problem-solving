# Get Segments

## Problem Statement

You are given an array of integers `arr` of size `n`, and an integer `x`. Your task is to divide the array into consecutive segments such that the OR of each segment is less than or equal to `x`. Return the minimum number of segments needed to achieve this.

**Note**: For the answer to always exist, `x` will always be greater than or equal to the maximum element of the array.

## Examples

### Example 1:
**Input:**
arr = [1, 2, 3, 4]
n = 4
x = 4

**Output:**
2

**Explanation:**
One possible segmentation is [1, 2, 3] and [4] where OR of the first segment 1|2|3 = 3 and OR of the second segment 4 are both less than or equal to 4.

### Example 2:
**Input:**
arr = [4, 8, 12, 16]
n = 4
x = 50

**Output:**
1

**Explanation:**
One possible segmentation is [4, 8, 12, 16]


## Your Task:
You don't have to read input or print anything. Complete the function `getSegments()` which takes the array `arr`, `n`, and `x`, and return the minimum number of segments.

## Constraints:
- \(1 \leq \text{arr}[i] \leq 10^9\)
- \(1 \leq n \leq 10^6\)
- \(0 \leq x \leq 10^9\)

## Approach

1. **Initialization:**
   - Start with the first segment and initialize the OR value for the segment.

2. **Iterate Through the Array:**
   - For each element in the array, update the current OR value.
   - If the OR value exceeds `x`, increment the segment count and reset the current OR value with the current element.

3. **Edge Cases:**
   - If the array is empty or has only one element, handle these trivial cases accordingly.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp