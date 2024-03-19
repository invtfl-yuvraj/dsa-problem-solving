# Find Duplicates in an Array

## Problem Statement

Given an array `a` of size `N` which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such element is found, return a list containing [-1]. 

### Example 1:

**Input:**  
N = 4  
a[] = {0, 3, 1, 2}  

**Output:**  
-1  

**Explanation:**  
There is no repeating element in the array. Therefore, the output is -1.

### Example 2:

**Input:**  
N = 5  
a[] = {2, 3, 1, 2, 3}  

**Output:**  
2 3  

**Explanation:**  
2 and 3 occur more than once in the given array.

## Your Task:

Complete the function `duplicates()` which takes array `a[]` and `n` as input parameters and returns a list of elements that occur more than once in the given array in a sorted manner. 

### Expected Time Complexity: 
O(n)

### Expected Auxiliary Space: 
O(n)

### Constraints:

- 1 <= N <= 10^5
- 0 <= A[i] <= N-1, for each valid i

## Approach

To solve this problem, we can use a hash set to keep track of the elements we've seen so far. As we iterate through the array, we check if the current element is already in the set. If it is, we add it to our result list. After iterating through the array, we return the sorted result list. If no duplicates are found, we return [-1].

## Implementation

The solution to this problem can be implemented in the `duplicates()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `duplicates()` function in your Python code.
3. Call the `duplicates()` function with the array `a[]` and `n` as input parameters to get the list of duplicate elements.

