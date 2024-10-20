Given an absolute sorted array arr[] and an integer target. You have to find a pair of elements in the given array that sum to target. An absolute sorted array is an array of numbers in which |arr[i]| <= |arr[j]| whenever i < j. You can return the pair in any order.

Note: Inputs are given such that only one valid answer exists.

Examples:

Input: arr[] = [-49, 75, 103, -147, 164, -197, -238, 314, 348, -422], target = 167
Output: [-147, 314]
Explanation: Pair with sum equal to 167 is (-147, 314).
Input: arr[] = [2, -3, 4], target = 8
Output: []
Explanation: No pair exists with sum equal to 8.
Input: arr[] = [-8, 10, 12, -15, 24], target = 22
Output: [12, 10]
Explanation: Pair with sum equal to 22 is (12, 10).
Constraints:
1 <= arr.size() <= 105
-104 <= arr[i] <= 104
-104 <= K <= 104

