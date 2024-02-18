## Kth Smallest Element

# Overview
This repository contains a solution to the "Kth Smallest Element" problem from an undisclosed platform. The problem involves finding the Kth smallest element in an array using the merge sort algorithm.

# Contents
`solution.cpp` : C++ implementation of the solution.
`README.md` : Documentation providing an overview of the problem, approach, implementation, and instructions on how to use the solution.

# Problem Statement
Given an array arr[] and an integer K where K is smaller than the size of the array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
</br>
Note: l and r denote the starting and ending index of the array.

- Problem Reference: #https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1?page=1&status=solved&sortBy=submissions

### Example 1:
#### Input:
N = 6 </br>
arr[] = {7, 10, 4, 3, 20, 15} </br>
K = 3 </br>
L = 0 </br>
R = 5 </br>
#### Output : 
7
#### Explanation:
The 3rd smallest element in the given array is 7.

### Example 2:
#### Input:
N = 5 </br>
arr[] = {7, 10, 4, 20, 15} </br>
K = 4 </br>
L = 0 </br>
R = 4 </br>

#### Output: 
15

#### Explanation:
The 4th smallest element in the given array is 15.

## Approach
The solution involves implementing the merge sort algorithm to sort the array in ascending order. After sorting, return the Kth element of the array.

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



