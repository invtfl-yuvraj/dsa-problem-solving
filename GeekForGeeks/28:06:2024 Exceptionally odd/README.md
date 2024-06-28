# Exceptionally Odd

## Problem Statement

Given an array of N positive integers where all numbers occur an even number of times except one number which occurs an odd number of times. Find the exceptional number.

## Examples

**Example 1:**

**Input:**
N = 7
Arr[] = {1, 2, 3, 2, 3, 1, 3}

**Output:**
3


**Explanation:**
3 occurs three times.

**Example 2:**

**Input:**
N = 7
Arr[] = {5, 7, 2, 7, 5, 2, 5}

**Output:**
5


**Explanation:**
5 occurs three times.

## Constraints

- \( 1 \leq N \leq 10^5 \)
- \( 1 \leq arr[i] \leq 10^6 \)

## Approach

1. **Use XOR Operation:** The XOR operation has useful properties for this problem:
   - \( a \oplus a = 0 \) (any number XORed with itself is 0)
   - \( a \oplus 0 = a \) (any number XORed with 0 is the number itself)
   - XOR is commutative and associative, meaning the order of operations doesn't matter.

2. **Iterate through the Array:** XOR all the elements of the array. The elements that appear an even number of times will cancel each other out, leaving the element that appears an odd number of times.

This approach runs in O(N) time complexity and uses O(1) auxiliary space.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp