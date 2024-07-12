# Average Salary Excluding the Minimum and Maximum Salary

## Problem Statement

You are given an array of unique integers `salary` where `salary[i]` is the salary of the ith employee. Return the average salary of employees excluding the minimum and maximum salary. Answers within 10^-5 of the actual answer will be accepted.

## Examples

### Example 1:

**Input:**
salary = [4000, 3000, 1000, 2000]

**Output:**
2500.00000

**Explanation:**
Minimum salary and maximum salary are 1000 and 4000 respectively.
Average salary excluding minimum and maximum salary is (2000 + 3000) / 2 = 2500.

### Example 2:

**Input:**
salary = [1000, 2000, 3000]


**Output:**
2000.00000

**Explanation:**
Minimum salary and maximum salary are 1000 and 3000 respectively.
Average salary excluding minimum and maximum salary is (2000) / 1 = 2000.

## Approach

To compute the average salary excluding the minimum and maximum:

1. Sort the `salary` array.
2. Compute the sum of salaries excluding the first and last elements of the sorted array.
3. Calculate the average by dividing the sum by the number of elements minus 2.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.

## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp