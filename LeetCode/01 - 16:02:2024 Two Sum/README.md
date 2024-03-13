# Two Sum Problem

## Overview
This repository contains a C++ solution to the Two Sum problem on LeetCode.

## Contents
`solution.cpp` : C++ implementation of the solution.
`README.md` : Documentation providing an overview of the problem, approach, implementation, and instructions on how to use the solution.

## Problem Statement

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.
</br>
You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

## Example:

- Input: `nums = [2,7,11,15]`, `target = 9`
  Output: `[0,1]`
  Explanation: Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.

- Input: `nums = [3,2,4]`, `target = 6`
  Output: `[1,2]`

- Input: `nums = [3,3]`, `target = 6`
  Output: `[0,1]`

### Constraints:

- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Only one valid answer exists.

## Approach

The solution uses a brute-force approach with two nested loops to find the pair of numbers that add up to the target.

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