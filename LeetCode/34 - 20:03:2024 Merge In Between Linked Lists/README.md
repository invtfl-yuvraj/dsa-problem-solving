# Merge In Between Linked Lists

## Problem Statement

You are given two linked lists: `list1` and `list2` of sizes `n` and `m` respectively.

Remove `list1`'s nodes from the `a`th node to the `b`th node, and put `list2` in their place.

Build the result list and return its head.

### Example 1:

**Input:**  
list1 = `[10, 1, 13, 6, 9, 5]`, `a = 3`, `b = 4`, list2 = `[1000000, 1000001, 1000002]`

**Output:**  
`[10, 1, 13, 1000000, 1000001, 1000002, 5]`

**Explanation:**  
We remove the nodes 3 and 4 and put the entire list2 in their place. The blue edges and nodes in the above figure indicate the result.

### Example 2:

**Input:**  
list1 = `[0, 1, 2, 3, 4, 5, 6]`, `a = 2`, `b = 5`, list2 = `[1000000, 1000001, 1000002, 1000003, 1000004]`

**Output:**  
`[0, 1, 1000000, 1000001, 1000002, 1000003, 1000004, 6]`

**Explanation:**  
The blue edges and nodes in the above figure indicate the result.

## Constraints

- 3 <= list1.length <= 10^4
- 1 <= a <= b < list1.length - 1
- 1 <= list2.length <= 10^4

## Approach

To solve this problem, we can follow these steps:

1. Traverse `list1` to find the `a`th and `b`th nodes.
2. Attach the `next` pointer of the `a`th node to the head of `list2`.
3. Traverse `list2` to find its last node.
4. Attach the `next` pointer of the last node of `list2` to the `next` pointer of the `b`th node of `list1`.

## Implementation

The solution to this problem can be implemented in the `mergeInBetween()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `mergeInBetween()` function in your Python code.
3. Call the `mergeInBetween()` function with the `list1`, `a`, `b`, and `list2` as inputs to merge the lists.


