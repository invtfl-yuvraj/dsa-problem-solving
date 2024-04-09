# Level Order Traversal 

## Problem Statement

Given a root of a binary tree with `n` nodes, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.

### Example 1:

**Input:**  
1
/ \
3 2


**Output:**  
1 3 2


### Example 2:

**Input:**  
       10
    /      \
   20       30
  /           \
40             60


**Output:**  
10 20 30 40 60


## Constraints:

- 1 ≤ n ≤ 10^5
- 0 ≤ Data of a node ≤ 10^9

## Approach

To perform level order traversal of a binary tree, we can use a queue to store the nodes at each level. We start by enqueuing the root node and then iterate through the queue until it becomes empty. At each iteration, we dequeue a node, print its value, and enqueue its left and right child nodes if they exist. We continue this process until the queue is empty, which ensures that we have traversed all nodes in level order.

## Implementation

The solution to this problem can be implemented in the `levelOrder()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `levelOrder()` function in your Python code.
3. Call the `levelOrder()` function with the root node of the binary tree as input to get the level order traversal.



