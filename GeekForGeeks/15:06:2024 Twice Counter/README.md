# Twice Counter

## Problem Statement
Given a list of N words, count the number of words that appear exactly twice in the list.

## Examples

**Example 1:**
**Input:**
N = 3
list = {"Geeks", "For", "Geeks"}
**Output:**
1
**Explanation:**
'Geeks' is the only word that appears twice.

**Example 2:**
**Input:**
N = 8
list = {"Tom", "Jerry", "Thomas", "Tom", "Jerry", "Courage", "Tom", "Courage"}
**Output:**
2
**Explanation:**
'Jerry' and 'Courage' are the only words that appear twice.

## Constraints
- 1 <= N <= 10^4

## Expected Time Complexity
- O(N)

## Expected Auxiliary Space
- O(N)

## Approach
1. Use a hash map (or dictionary) to count the occurrences of each word in the list.
2. Iterate through the hash map to count the number of words that appear exactly twice.

## Steps
1. Initialize an empty hash map to store the frequency of each word.
2. Iterate through the list and update the frequency of each word in the hash map.
3. Initialize a counter to count the words that appear exactly twice.
4. Iterate through the hash map and increment the counter for words that have a frequency of exactly two.
5. Return the counter.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp