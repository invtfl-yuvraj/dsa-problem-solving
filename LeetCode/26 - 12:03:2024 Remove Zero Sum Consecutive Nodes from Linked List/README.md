# Remove Zero Sum Consecutive Nodes from Linked List

## Problem Statement

Given the head of a linked list, we repeatedly delete consecutive sequences of nodes that sum to 0 until there are no such sequences.

After doing so, return the head of the final linked list. You may return any such answer.

(Note that in the examples below, all sequences are serializations of ListNode objects.)

### Example 1:

**Input:**  
head = [1, 2, -3, 3, 1]  

**Output:**  
[3, 1]  

**Note:**  
The answer [1, 2, 1] would also be accepted.

### Example 2:

**Input:**  
head = [1, 2, 3, -3, 4]  

**Output:**  
[1, 2, 4]  

### Example 3:

**Input:**  
head = [1, 2, 3, -3, -2]  

**Output:**  
[1]  

## Constraints:

- The given linked list will contain between 1 and 1000 nodes.
- Each node in the linked list has -1000 <= node.val <= 1000.

## Approach

To solve this problem, we can use a hashmap to store the cumulative sum of nodes as we traverse the linked list. We iterate through the linked list and calculate the cumulative sum at each node. If we encounter a cumulative sum that we have seen before, it means there exists a subsequence whose sum is 0. In such cases, we remove the nodes between the two occurrences of the cumulative sum. After removing the nodes, we update the pointers accordingly. We repeat this process until no such subsequence exists. Finally, we return the head of the modified linked list.

## Implementation

The solution to this problem can be implemented in the `removeZeroSumSublists()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `removeZeroSumSublists()` function in your Python code.
3. Call the `removeZeroSumSublists()` function with the head of the linked list as input to get the final linked list after removing zero sum consecutive nodes.


