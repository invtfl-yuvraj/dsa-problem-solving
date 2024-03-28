# Delete Without Head Pointer

## Problem Statement

You are given a node `del_node` of a Singly Linked List where you have to delete a value of the given node from the linked list but you are not given the head of the list.

By deleting the node value, we do not mean removing it from memory. We mean:

- The value of the given node should not exist in the linked list.
- The number of nodes in the linked list should decrease by one.
- All the values before & after the `del_node` node should be in the same order.

**Note:**

- Multiple nodes can have the same values as the `del_node`, but you must only remove the node whose pointer `del_node` is given to you.
- It is guaranteed that there exists a node with a value equal to the `del_node` value and it will not be the last node of the linked list.

### Example 1:

**Input:**  
Linked List = 1 -> 2  
del_node = 1  

**Output:**  
2  

**Explanation:**  
After deleting 1 from the linked list, we have remaining nodes as 2.

### Example 2:

**Input:**  
Linked List = 10 -> 20 -> 4 -> 30  
del_node = 20  

**Output:**  
10 4 30  

**Explanation:**  
After deleting 20 from the linked list, we have remaining nodes as 10, 4, 30.

## Your Task:

You don't need to read or print anything. You only need to complete the function `deleteNode()` which takes a reference of the deleting node value & your task is to delete the given node value.

### Expected Time Complexity: 
O(1)

### Expected Auxilliary Space: 
O(1)

### Constraints:

- 2 <= n <= 10^3  
- 1 <= elements of the linked list <= 10^9

## Approach

To solve this problem, we can simply copy the value of the next node to the given node and delete the next node. This effectively removes the given node from the linked list while maintaining the order of the rest of the nodes.

## Implementation

The solution to this problem can be implemented in the `deleteNode()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `deleteNode()` function in your Python code.
3. Call the `deleteNode()` function with the reference of the deleting node as input to delete the node from the linked list.
