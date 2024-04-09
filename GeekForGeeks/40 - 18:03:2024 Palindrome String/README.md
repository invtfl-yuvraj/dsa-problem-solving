# Palindrome String

## Problem Statement

Given a string `S`, check if it is a palindrome or not.

### Example 1:

**Input:**  
S = "abba"  

**Output:**  
1  

**Explanation:**  
S is a palindrome.

### Example 2:

**Input:**  
S = "abc"  

**Output:**  
0  

**Explanation:**  
S is not a palindrome.

## Constraints:

- 1 <= Length of S <= 2 * 10^5

## Approach

To check if a string is a palindrome or not, we can use two pointers approach. We initialize two pointers, one at the beginning of the string and one at the end. We compare characters at these pointers and move towards each other until they meet in the middle of the string. If at any point the characters at these pointers are not equal, we return false indicating that the string is not a palindrome. Otherwise, if we successfully traverse the entire string without any inequality, we return true indicating that the string is a palindrome.

## Implementation

The solution to this problem can be implemented in the `isPalindrome()` function provided in the `solution.py` file included in this repository.

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Implement the `isPalindrome()` function in your Python code.
3. Call the `isPalindrome()` function with the string `S` as input to check if it is a palindrome or not.

Feel free to copy and paste this into your `readme.md` file.
