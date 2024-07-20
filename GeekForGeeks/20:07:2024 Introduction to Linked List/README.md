# Introduction to Linked List

## Problem Statement

Geek loves the linked list data structure. Given an array of integers `arr` of size `n`, Geek wants to construct the linked list from `arr`.

Construct the linked list from `arr` and return the head of the linked list.

## Examples

### Example 1:
**Input:**
n = 5
arr = [1,2,3,4,5]

**Output:**
1 2 3 4 5

**Explanation:**
Linked list for the given array will be `1->2->3->4->5`.

### Example 2:
**Input:**
n = 2
arr = [2,4]

**Output:**
2 4

**Explanation:**
Linked list for the given array will be `2->4`.

## Constraints:
- \(1 \leq n \leq 10^5\)
- \(1 \leq arr[i] \leq 100\)

## Approach

To solve this problem, we need to:
1. Define a linked list node class.
2. Iterate through the array `arr` to create nodes and link them together.

### Steps:

1. Define a `ListNode` class with attributes `data` and `next`.
2. Initialize a head node to `None`.
3. Iterate through the array:
   - For the first element, create a node and set it as the head.
   - For subsequent elements, create a node and link it to the previous node.
4. Return the head of the linked list.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp