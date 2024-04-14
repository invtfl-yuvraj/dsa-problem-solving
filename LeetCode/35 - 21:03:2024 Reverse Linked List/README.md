# Reverse Linked List

## Problem Statement

Given the head of a singly linked list, reverse the list, and return the reversed list.

### Example 1:

**Input:**  
head = `[1,2,3,4,5]`

**Output:**  
`[5,4,3,2,1]`

### Example 2:

**Input:**  
head = `[1,2]`

**Output:**  
`[2,1]`

### Example 3:

**Input:**  
head = `[]`

**Output:**  
`[]`

## Constraints

- The number of nodes in the list is in the range [0, 5000].
- -5000 <= Node.val <= 5000.

## Approach

To reverse the linked list:

1. Initialize three pointers: `prev` to keep track of the previous node (initially set to `None`), `current` to keep track of the current node (initially set to `head`), and `next_node` to keep track of the next node.

2. Iterate through the linked list:

    - Save the `next` node of the current node in `next_node`.
    - Reverse the link by pointing the `next` of the current node to `prev`.
    - Move the `prev` pointer to the current node.
    - Move the `current` pointer to `next_node`.

3. Once the loop ends, `prev` will be pointing to the new head of the reversed linked list. Return this node.

## Implementation

The solution to this problem can be implemented in the `reverseList()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `reverseList()` function in your Python code.
3. Call the `reverseList()` function with the `head` of the linked list as the input to reverse the list.

Feel free to copy and paste this into your `readme.md` file.
