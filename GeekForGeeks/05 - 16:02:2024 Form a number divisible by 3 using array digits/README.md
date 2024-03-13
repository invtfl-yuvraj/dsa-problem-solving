# Form a number divisible by 3 using array digits

## Overview
This repository contains a solution to the "Form a Number Divisible by 3" problem. The problem involves determining whether it's possible to construct an integer using all the digits of the given numbers such that the resulting number is divisible by 3.

## Contents
`solution.cpp` : C++ implementation of the solution.
`README.md` : Documentation providing an overview of the problem, approach, implementation, and instructions on how to use the solution.

## Problem Statement
You will be given an array arr of integers of length N. You can construct an integer from two integers by treating the integers as strings and then concatenating them. For example, 19 and 4 can be used to construct 194 and 419.
</br>
The task is to find whether it’s possible to construct an integer using all the digits of these numbers such that it would be divisible by 3. If it is possible, then print 1; if not, print 0.

- Problem Reference: https://www.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1?page=1&status=solved&sortBy=submissions

## Example 1:
#### Input:
N = 3 </br>
arr = {40, 50, 90} </br>

#### Output : 
1

#### Explanation:
One such number is 405090.

## Example 2:
#### Input:
N = 2 </br>
arr = {1, 4} </br>

#### Output: 
0

#### Explanation:
The numbers we can form are 14 and 41. But neither of them is divisible by 3.

## Approach
The solution involves summing up all the digits in the array and checking if the sum is divisible by 3. If the sum is divisible by 3, then it's possible to form a number divisible by 3.

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



