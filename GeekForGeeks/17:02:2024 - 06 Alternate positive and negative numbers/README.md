# Alternate Positive and Negative Numbers

## Overview
This repository contains a solution to the "Alternate Positive and Negative Numbers" problem. The problem involves rearranging an array of positive and negative numbers alternately, while maintaining the relative order of positive and negative numbers.

## Contents
`solution.cpp` : C++ implementation of the solution.
`README.md` : Documentation providing an overview of the problem, approach, implementation, and instructions on how to use the solution.

## Problem Statement
Given an unsorted array `arr` of `N` positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
</br>
Note: The array should start with a positive number, and 0 (zero) should be considered a positive element.

- Problem Reference: https://www.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1?page=1&status=solved&sortBy=submissions

## Example 1:
#### Input:
N = 9 </br>
Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}

#### Output : 
9 -2 4 -1 5 -5 0 -3 2

#### Explanation:
Positive elements: 9, 4, 5, 0, 2 </br>
Negative elements: -2, -1, -5, -3 </br>
The output is 9, -2, 4, -1, 5, -5, 0, -3, 2.

## Example 2:
#### Input:
N = 10 </br>
Arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}

#### Output: 
5 -5 2 -2 4 -8 7 1 8 0

#### Explanation:
Positive elements: 5, 2, 4, 7, 1, 8, 0 </br>
Negative elements: -5, -2, -8 </br>
The output is 5, -5, 2, -2, 4, -8, 7, 1, 8, 0.

## Approach
The solution involves counting the number of positive and negative elements in the array. Then, creating two separate arrays for positive and negative numbers and finally merging them alternately.

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



