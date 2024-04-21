# Reorder List

## Problem Statement

You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln

Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …

You may not modify the values in the list's nodes. Only nodes themselves may be changed.

### Example 1:

**Input:**  
`head = [1,2,3,4]`

**Output:**  
`[1,4,2,3]`

**Explanation:**  
The reordered list is obtained by interleaving the first and last elements, then the second and second-to-last elements, and so on.

### Example 2:

**Input:**  
`head = [1,2,3,4,5]`

**Output:**  
`[1,5,2,4,3]`

**Explanation:**  
The reordered list is obtained by interleaving the first and last elements, then the second and second-to-last elements, and so on.

## Constraints

- The number of nodes in the list is in the range [1, 5 * 10^4].
- 1 <= Node.val <= 1000

## Approach

To reorder the linked list, follow these steps:

1. Find the middle of the linked list.
2. Reverse the second half of the linked list.
3. Merge the first half with the reversed second half by interleaving them.

## Implementation

The solution to this problem can be implemented in the `reorderList()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `reorderList()` function in your Python code.
3. Call the `reorderList()` function with the head of the linked list as input to reorder it.


