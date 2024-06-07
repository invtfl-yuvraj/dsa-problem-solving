# Sum Multiples

## Problem Statement

Given a positive integer n, find the sum of all integers in the range [1, n] inclusive that are divisible by 3, 5, or 7.

Return an integer denoting the sum of all numbers in the given range satisfying the constraint.

### Example 1:

**Input:**  
n = 7  

**Output:**  
21  

**Explanation:**  
Numbers in the range [1, 7] that are divisible by 3, 5, or 7 are 3, 5, 6, 7. The sum of these numbers is 21.

### Example 2:

**Input:**  
n = 10  

**Output:**  
40  

**Explanation:**  
Numbers in the range [1, 10] that are divisible by 3, 5, or 7 are 3, 5, 6, 7, 9, 10. The sum of these numbers is 40.

### Example 3:

**Input:**  
n = 9  

**Output:**  
30  

**Explanation:**  
Numbers in the range [1, 9] that are divisible by 3, 5, or 7 are 3, 5, 6, 7, 9. The sum of these numbers is 30.

## Constraints:

- 1 <= n <= 10^3

## Approach

1. **Brute Force:** Iterate through all numbers in the range [1, n] and check if they are divisible by 3, 5, or 7. If yes, add them to the sum.
2. **Mathematical:** We can calculate the sum of numbers divisible by 3, 5, or 7 using the arithmetic series formula.

## To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.
4. The program will prompt you to input the array for which you want to find the missing element.
5. The program will output the missing element.

###### Feel free to contribute improvements or alternative solutions by creating a pull request.
