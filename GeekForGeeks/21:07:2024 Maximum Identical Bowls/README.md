# Maximum Identical Bowls

## Problem Statement

There are N bowls containing cookies. In one operation, you can take one cookie from any of the non-empty bowls and put it into another bowl. If the bowl becomes empty, you discard it. You can perform the above operation any number of times. You want to know the maximum number of bowls you can have with an identical number of cookies.

Note: All the non-discarded bowls should contain an identical number of cookies.

## Examples

### Example 1:
**Input:**
N = 3
arr[] = {3, 1, 5}

**Output:**
3

**Explanation:**
We can put 2 cookies one by one from the 3rd bowl and put them into the 2nd bowl. Now the array becomes `{3, 3, 3}`. Each bowl now contains 3 cookies.

### Example 2:
**Input:**
N = 4
arr[] = {1, 2, 6, 5}

**Output:**
2

**Explanation:**
We can take 6 cookies one by one from the 3rd bowl and put them into the 1st bowl, now the array becomes `{7, 2, 0, 5}`. We discard the 3rd bowl as it becomes empty. Hence, the array is `{7, 2, 5}`. Now, we take 5 cookies one by one from the 3rd bowl and put them into the 2nd bowl. Hence, the array is `{7, 7, 0}`. Discarding the 3rd empty bowl, the number of bowls containing an identical number of cookies, i.e., 7, is 2.

## Constraints:
- \(1 \leq N \leq 10^5\)
- \(1 \leq arr[i] \leq 10^9\)
- Array may contain duplicate elements.

## Approach

The main idea is to find the maximum number of bowls that can have an identical number of cookies. To achieve this, we need to consider the following:
- The total number of cookies.
- The number of bowls.

If we have a total of `S` cookies and `N` bowls, then the maximum number of identical bowls we can have is given by the greatest common divisor (GCD) of the total number of cookies divided by the number of bowls. This is because GCD allows us to find the largest possible grouping of the cookies into identical bowls.

### Steps:
1. Calculate the sum of all cookies in the bowls, `total_cookies`.
2. The maximum number of bowls with identical cookies can be obtained by `total_cookies // N`.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp