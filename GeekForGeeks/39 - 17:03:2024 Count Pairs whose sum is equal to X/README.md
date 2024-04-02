# Count Pairs whose sum is equal to X

## Problem Statement

Given two linked lists `head1` and `head2` with distinct elements, determine the count of all distinct pairs from both lists whose sum is equal to the given value `x`.

Note: A valid pair would be in the form (x, y) where x is from the first linked list and y is from the second linked list.

### Example 1:

**Input:**  
head1 = 1->2->3->4->5->6  
head2 = 11->12->13  
x = 15  

**Output:**  
3  

**Explanation:**  
There are total 3 pairs whose sum is 15: (4, 11), (3, 12), and (2, 13).

### Example 2:

**Input:**  
head1 = 7->5->1->3  
head2 = 3->5->2->8  
x = 10  

**Output:**  
2  

**Explanation:**  
There are total 2 pairs whose sum is 10: (7, 3) and (5, 5).

## Constraints:

- 1 <= length(head1), length(head2) <= 10^5
- 1 <= Value of elements of linked lists <= 10^9
- 1 <= x <= 10^9

## Approach

To solve this problem efficiently, we can use a hash set to store the elements of one of the linked lists. Then, we iterate through the other linked list and for each element `y`, we check if `x - y` exists in the hash set. If it does, we increment the count of pairs. This approach has a time complexity of O(length(head1) + length(head2)).

## Implementation

The solution to this problem can be implemented in the `countPairs()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `countPairs()` function in your Python code.
3. Call the `countPairs()` function with the linked lists `head1`, `head2`, and the integer `x` as input parameters to get the count of distinct pairs whose sum is equal to `x`.


