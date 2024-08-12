# Counts Zeros XOR Pairs

## Problem Statement

Given an array `A[]` of size `N`, find the number of pairs `(i, j)` such that `Ai XOR Aj = 0` and `1 ≤ i < j ≤ N`.

## Examples

### Example 1:
**Input:**  
arr[] = {1, 3, 4, 1, 4}

**Output:**  
2

**Explanation:**  
Index `(0, 3)` and `(2, 4)` are the only pairs whose XOR is zero, so the count is 2.

### Example 2:
**Input:**  
arr[] = {2, 2, 2}

**Output:**  
3

**Explanation:**  
All pairs `(0, 1)`, `(0, 2)`, and `(1, 2)` have XOR equal to zero.

## Constraints
- `2 ≤ N ≤ 10^5`
- `1 ≤ A[i] ≤ 10^5`

## Expected Time Complexity
- `O(N*Log(N))`

## Expected Auxiliary Space
- `O(1)`

## Approach

To find the number of pairs `(i, j)` such that `Ai XOR Aj = 0`, observe that `Ai XOR Aj = 0` implies that `Ai = Aj`. Therefore, the problem reduces to counting pairs of equal elements.

### Steps:
1. **Frequency Counting**:
   - Count the frequency of each element in the array using a hashmap or dictionary.
   
2. **Calculate the Number of Pairs**:
   - For each element that appears `f` times in the array, the number of pairs is given by the combination formula `C(f, 2) = f * (f - 1) / 2`.
   
3. **Summing Up**:
   - Sum up the pairs for all elements to get the final result.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp