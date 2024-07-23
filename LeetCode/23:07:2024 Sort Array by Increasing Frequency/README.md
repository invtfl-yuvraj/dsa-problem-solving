# Sort Array by Increasing Frequency

## Problem Statement

Given an array of integers `nums`, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

Return the sorted array.

## Examples

### Example 1:
**Input:**
nums = [1, 1, 2, 2, 2, 3]

**Output:**
[3, 1, 1, 2, 2, 2]

**Explanation:**
'3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

### Example 2:
**Input:**
nums = [2, 3, 1, 3, 2]

**Output:**
[1, 3, 3, 2, 2]

**Explanation:**
'2' and '3' both have a frequency of 2, so they are sorted in decreasing order.

### Example 3:
**Input:**
nums = [-1, 1, -6, 4, 5, -6, 1, 4, 1]

**Output:**
[5, -1, 4, 4, -6, -6, 1, 1, 1]

## Constraints:
- \(1 \leq \text{nums.length} \leq 100\)
- \(-100 \leq \text{nums[i]} \leq 100\)

## Approach

1. **Count Frequencies:** Use a dictionary to count the frequency of each element in the array.
2. **Sort by Frequency and Value:** Sort the array based on two criteria:
   - Increasing order of frequency.
   - If frequencies are the same, then by decreasing order of the element's value.
3. **Return the Sorted Array.**

## Implementation

The solution to this problem can be found in the `solution.cpp` file provided in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.