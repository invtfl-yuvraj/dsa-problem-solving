# Linked List Cycle Detection

## Overview

This repository contains a solution to the "Linked List Cycle Detection" problem. The task is to determine if a given linked list has a cycle in it.

## Problem Statement

Given the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, `pos` is used to denote the index of the node that tail's next pointer is connected to. Note that `pos` is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

**Example 1:**
- Input: head = [3,2,0,-4], pos = 1
- Output: true
- Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

**Example 2:**
- Input: head = [1,2], pos = 0
- Output: true
- Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.

**Example 3:**
- Input: head = [1], pos = -1
- Output: false
- Explanation: There is no cycle in the linked list.

## Your Task:

You don't need to read input or print anything. Your task is to complete the function `hasCycle()` which takes the head of a linked list as input and returns true if there is a cycle in the linked list, otherwise returns false.

**Expected Time Complexity:** O(n)
**Expected Auxiliary Space:** O(1)

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.

