## Missing Number in Array

# Overview
This repository contains a solution to the "Missing number in array" problem from Geek For Geeks DSA. The problem involves finding the missing element in an array of size N-1 containing distinct integers in the range of 1 to N.

# Problem Statement
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.
- [Geek For Geeks - Missing Number in array](#https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&sortBy=submissions)

### Example 1:
#### Input:
N = 5
A[] = {1,2,3,5}
Output: 4

### Example 2:
#### Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9

## Approach
The solution involves calculating the sum of the elements in the given array and then finding the total sum of numbers from 1 to N. The missing number is determined by subtracting the array sum from the total sum.

## Implementation
The solution is implemented in C++ in the `solution.cpp` file. The missingNumber() function takes the array and N as input parameters and returns the value of the missing number.

## How to Use
To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.
4. The program will prompt you to input the array for which you want to find the missing element.
5. The program will output the missing element.


###### Feel free to contribute improvements or alternative solutions by creating a pull request.



