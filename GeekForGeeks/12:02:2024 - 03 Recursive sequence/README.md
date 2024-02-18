## Recursive Sequence

# Overview
This repository contains a solution to the "Recursive Sequence" problem from an undisclosed platform. The problem involves calculating a sequence defined by a specific pattern and returning the result modulo 10^9+7.

# Contents
`solution.cpp` : C++ implementation of the solution.
`README.md` : Documentation providing an overview of the problem, approach, implementation, and instructions on how to use the solution.

# Problem Statement
A function F is defined as follows </br> 
F(n)= (1) +(2*3) + (4*5*6) ... upto n terms (look at the examples for better clarity). </br>
Given an integer n, determine the F(n).

- Problem Reference: #https://www.geeksforgeeks.org/problems/recursive-sequence1611/1?page=1&status=solved&sortBy=submissions

### Example 1:
#### Input:
Input : n = 5
#### Output : 
365527

#### Explanation:
F (5) = 1 + 2*3 + 4*5*6 + 7*8*9*10 + 11*12*13*14*15 = 365527.

### Example 2:
#### Input:
n = 7

#### Output: 
6006997207

#### Explanation:
F (7) =1+ 2*3 + 4*5*6 + 7*8*9*10 + 11*12*13*14*15 + 16*17*18*19*20*21 + 22*23*24*25*26*27*28 = 6006997207. </br>
6006997207 mod 10^9 + 7 = 6997165

## Approach
The solution involves nested loops to calculate the sequence as defined in the problem statement. The inner loop calculates the multiplication and the outer loop adds the result to the total sum. The final result is returned modulo 10^9+7.

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



