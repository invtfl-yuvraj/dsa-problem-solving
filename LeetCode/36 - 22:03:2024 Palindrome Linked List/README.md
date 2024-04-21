# Palindrome Linked List

## Problem Statement

Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

### Example 1:

**Input:**  
`head = [1,2,2,1]`

**Output:**  
`true`

**Explanation:**  
The linked list represents the sequence 1 -> 2 -> 2 -> 1, which is a palindrome.

### Example 2:

**Input:**  
`head = [1,2]`

**Output:**  
`false`

**Explanation:**  
The linked list represents the sequence 1 -> 2, which is not a palindrome.

## Constraints

- The number of nodes in the list is in the range [1, 10^5].
- 0 <= Node.val <= 9

## Approach

To check if a singly linked list is a palindrome:

1. Find the middle of the linked list using the slow and fast pointer technique.
2. Reverse the second half of the linked list.
3. Compare the first half of the original linked list with the reversed second half.
4. If they match, the linked list is a palindrome; otherwise, it is not.

## Implementation

The solution to this problem can be implemented in the `isPalindrome()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `isPalindrome()` function in your Python code.
3. Call the `isPalindrome()` function with the head of the linked list as input to check if it is a palindrome or not.


