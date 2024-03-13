# Wave Array

## Overview

This repository contains a solution to the "Wave Array" problem. The problem involves sorting a sorted array into a wave-like array (in-place). In other words, arrange the elements into a sequence such that `arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5]...`. If there are multiple solutions, find the lexicographically smallest one.

## Contents

- **solution.cpp**: C++ implementation of the solution.
- **README.md**: Documentation providing an overview of the problem, approach, implementation, and instructions on how to use the solution.

## Problem Statement

Given a sorted array `arr[]` of distinct integers. Sort the array into a wave-like array (in-place). In other words, arrange the elements into a sequence such that `arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5]...`. If there are multiple solutions, find the lexicographically smallest one.

Note: The given array is sorted in ascending order, and you don't need to return anything to make changes in the original array itself.

### Example 1:

**Input:**
n = 5
arr[] = {1,2,3,4,5}

**Output:**
2 1 4 3 5

**Explanation:**
Array elements after sorting it in wave form are 2 1 4 3 5.

### Example 2:

**Input:**
n = 6
arr[] = {2,4,7,8,9,10}
**Output:**
4 2 8 7 10 9

**Explanation:**
Array elements after sorting it in wave form are 4 2 8 7 10 9.

## Approach

The solution involves traversing the array and swapping adjacent elements to form the wave-like sequence. The idea is to iterate through the array and swap adjacent elements starting from the second element.

## Implementation

The solution is implemented in C++ in the `solution.cpp` file.

## How to Use
To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.
4. The program will prompt you to input the array for which you want to find the missing element.
5. The program will output the missing element.

###### Feel free to contribute improvements or alternative solutions by creating a pull request.
