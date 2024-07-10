# Crawler Log Folder

## Problem Statement

The Leetcode file system keeps a log each time some user performs a change folder operation.

The operations are described below:

- `"../"` : Move to the parent folder of the current folder. (If you are already in the main folder, remain in the same folder).
- `"./"` : Remain in the same folder.
- `"x/"` : Move to the child folder named x (This folder is guaranteed to always exist).

You are given a list of strings `logs` where `logs[i]` is the operation performed by the user at the `i`th step.

The file system starts in the main folder, then the operations in logs are performed.

Return the minimum number of operations needed to go back to the main folder after the change folder operations.

## Examples

### Example 1:

**Input:**
logs = ["d1/","d2/","../","d21/","./"]

**Output:**
2

**Explanation:**
Use this change folder operation "../" 2 times and go back to the main folder.

### Example 2:

**Input:**
logs = ["d1/","d2/","./","d3/","../","d31/"]

**Output:**
3


### Example 3:

**Input:**
logs = ["d1/","../","../","../"]

**Output:**
0


## Constraints:
- `1 <= logs.length <= 103`
- `2 <= logs[i].length <= 10`
- `logs[i]` contains lowercase English letters, digits, '.', and '/'.
- `logs[i]` follows the format described in the statement.
- Folder names consist of lowercase English letters and digits.

## Approach

To solve the problem, follow these steps:

1. Initialize a counter to keep track of the current depth of the folder.
2. Iterate over each log in the logs array.
3. For each log:
   - If it is `"../"`, decrease the depth by 1 unless already in the main folder (depth > 0).
   - If it is `"./"`, do nothing.
   - If it is a folder name (ending with `/`), increase the depth by 1.
4. Return the current depth, which represents the minimum number of operations needed to go back to the main folder.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.

## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
