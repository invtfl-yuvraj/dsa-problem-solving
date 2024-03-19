# Majority Element

## Problem Statement

Given an array `A` of `N` elements. Find the majority element in the array. A majority element in an array `A` of size `N` is an element that appears strictly more than `N/2` times in the array.

### Example 1:

**Input:**  
N = 3   
A[] = {1, 2, 3}  

**Output:**  
-1  

**Explanation:**  
Since each element in {1, 2, 3} appears only once, there is no majority element.

### Example 2:

**Input:**  
N = 5  
A[] = {3, 1, 3, 3, 2}  

**Output:**  
3  

**Explanation:**  
Since 3 is present more than N/2 times, it is the majority element.

## Your Task:

The task is to complete the function `majorityElement()` which returns the majority element in the array. If no majority exists, return -1.

### Expected Time Complexity: 
O(N)

### Expected Auxiliary Space: 
O(1)

### Constraints:

- 1 ≤ N ≤ 10^7
- 0 ≤ Ai ≤ 10^6

## Approach

To solve this problem, we can use the Boyer-Moore Voting Algorithm. The basic idea of this algorithm is to find a candidate for the majority element and then verify if it's indeed the majority element. We iterate through the array, maintaining a candidate variable initialized with the first element, and a count variable initialized with 1. For each subsequent element, if it's the same as the candidate, we increment the count; otherwise, we decrement the count. If the count becomes 0, we update the candidate to the current element and reset the count to 1. After iterating through the array, the candidate will be the majority element. We then verify if it indeed appears more than N/2 times in the array.

## Implementation

The solution to this problem can be implemented in the `majorityElement()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `majorityElement()` function in your Python code.
3. Call the `majorityElement()` function with the array `A[]` and `N` as input parameters to get the majority element.

