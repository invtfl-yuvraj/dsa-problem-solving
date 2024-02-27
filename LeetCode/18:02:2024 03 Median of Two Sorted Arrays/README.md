# Median of Two Sorted Arrays

## Overview

This repository contains a solution to the "Median of Two Sorted Arrays" problem. The task is to find the median of two sorted arrays `nums1` and `nums2`.

## Problem Statement

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

### Example 1:

**Input:**
- nums1 = [1,3], nums2 = [2]

**Output:**
- 2.00000

**Explanation:**
- Merged array = [1,2,3] and median is 2.

### Example 2:

**Input:**
- nums1 = [1,2], nums2 = [3,4]

**Output:**
- 2.50000

**Explanation:**
- Merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

**Constraints:**
- nums1.length == m
- nums2.length == n
- 0 <= m <= 1000
- 0 <= n <= 1000
- 1 <= m + n <= 2000
- -10^6 <= nums1[i], nums2[i] <= 10^6

## Implementation

The solution is implemented in C++ and provided in the `solution.cpp` file.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.
4. The program will prompt you to input the array for which you want to find the missing element.
5. The program will output the missing element.

###### Feel free to contribute improvements or alternative solutions by creating a pull request.

