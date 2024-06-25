# Count Items Matching a Rule

## Problem Statement

You are given an array `items`, where each `items[i] = [typei, colori, namei]` describes the type, color, and name of the ith item. You are also given a rule represented by two strings, `ruleKey` and `ruleValue`.

The ith item is said to match the rule if one of the following is true:
- `ruleKey == "type"` and `ruleValue == typei`.
- `ruleKey == "color"` and `ruleValue == colori`.
- `ruleKey == "name"` and `ruleValue == namei`.

Return the number of items that match the given rule.

## Examples

**Example 1:**

**Input:**
items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]],
ruleKey = "color",
ruleValue = "silver"

**Output:**
1

**Explanation:**
There is only one item matching the given rule, which is ["computer", "silver", "lenovo"].

**Example 2:**

**Input:**
items = [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]],
ruleKey = "type",
ruleValue = "phone"

**Output:**
2

**Explanation:**
There are only two items matching the given rule, which are ["phone","blue","pixel"] and ["phone","gold","iphone"]. Note that the item ["computer","silver","phone"] does not match.

## Constraints

- `1 <= items.length <= 10^4`
- `1 <= typei.length, colori.length, namei.length, ruleValue.length <= 10`
- `ruleKey` is equal to either "type", "color", or "name".
- All strings consist only of lowercase letters.

## Approach

1. Determine the index based on the `ruleKey`.
2. Iterate through each item and count the number of items that match the rule.

## Steps

1. If `ruleKey` is "type", set the index to 0.
2. If `ruleKey` is "color", set the index to 1.
3. If `ruleKey` is "name", set the index to 2.
4. Iterate through the `items` list and compare the element at the determined index with `ruleValue`.
5. Count the matches and return the count.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp
