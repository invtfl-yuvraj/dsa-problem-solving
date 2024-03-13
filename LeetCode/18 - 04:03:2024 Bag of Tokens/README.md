# Bag of Tokens

## Overview

This repository contains a solution to the "Bag of Tokens" problem. The task is to maximize the total score by strategically playing tokens.

## Problem Statement

You start with an initial power of `power`, an initial score of 0, and a bag of tokens given as an integer array `tokens`, where each `tokens[i]` denotes the value of `token_i`.

Your goal is to maximize the total score by strategically playing these tokens. In one move, you can play an unplayed token in one of the two ways (but not both for the same token):

1. **Face-up:** If your current power is at least `tokens[i]`, you may play `token_i`, losing `tokens[i]` power and gaining 1 score.
2. **Face-down:** If your current score is at least 1, you may play `token_i`, gaining `tokens[i]` power and losing 1 score.

Return the maximum possible score you can achieve after playing any number of tokens.

**Example 1:**
- Input: tokens = [100], power = 50
- Output: 0
- Explanation: Since your score is 0 initially, you cannot play the token face-down. You also cannot play it face-up since your power (50) is less than `tokens[0]` (100).

**Example 2:**
- Input: tokens = [200,100], power = 150
- Output: 1
- Explanation: Play `token_1` (100) face-up, reducing your power to 50 and increasing your score to 1. There is no need to play `token_0`, since you cannot play it face-up to add to your score. The maximum score achievable is 1.

**Example 3:**
- Input: tokens = [100,200,300,400], power = 200
- Output: 2
- Explanation: Play the tokens in this order to get a score of 2:
  1. Play `token_0` (100) face-up, reducing power to 100 and increasing score to 1.
  2. Play `token_3` (400) face-down, increasing power to 500 and reducing score to 0.
  3. Play `token_1` (200) face-up, reducing power to 300 and increasing score to 1.
  4. Play `token_2` (300) face-up, reducing power to 0 and increasing score to 2.
  The maximum score achievable is 2.

**Constraints:**
- 0 <= tokens.length <= 1000
- 0 <= tokens[i], power < 10^4

## Your Task:  

You don't need to read input or print anything. Your task is to complete the function `maxScoreAfterTokens()` which takes the array of `tokens`, the initial `power`, and returns the maximum possible score.

**Expected Time Complexity:** O(n * log(n))
**Expected Auxiliary Space:** O(1)

## How to Use

To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.

