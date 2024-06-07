# Replace Words

## Problem Statement

In English, we have a concept called root, which can be followed by some other word to form another longer word - let's call this word derivative. For example, when the root "help" is followed by the word "ful", we can form a derivative "helpful".

Given a dictionary consisting of many roots and a sentence consisting of words separated by spaces, replace all the derivatives in the sentence with the root forming it. If a derivative can be replaced by more than one root, replace it with the root that has the shortest length.

Return the sentence after the replacement.

### Example 1:

**Input:**  
dictionary = ["cat","bat","rat"]  
sentence = "the cattle was rattled by the battery"

**Output:**  
"the cat was rat by the bat"

### Example 2:

**Input:**  
dictionary = ["a","b","c"]  
sentence = "aadsfasf absbs bbab cadsfafs"

**Output:**  
"a a b c"

## Constraints:

- 1 <= dictionary.length <= 1000
- 1 <= dictionary[i].length <= 100
- dictionary[i] consists of only lower-case letters.
- 1 <= sentence.length <= 10^6
- sentence consists of only lower-case letters and spaces.
- The number of words in sentence is in the range [1, 1000]
- The length of each word in sentence is in the range [1, 1000]
- Every two consecutive words in sentence will be separated by exactly one space.
- sentence does not have leading or trailing spaces.

## Your Task

The task is to complete the function `replaceWords()` which takes the `dictionary` and `sentence` as inputs and returns the modified sentence.

## Expected Time Complexity:

- O(n + m) where n is the length of the sentence and m is the total length of the dictionary.

## Expected Auxiliary Space:

- O(n + m)

## Approach

1. **Create a Set of Roots:** Store all roots from the dictionary in a set for O(1) look-up time.
2. **Split Sentence into Words:** Split the sentence into individual words.
3. **Replace Words:** For each word, check if any prefix of the word is in the set of roots. If found, replace the word with the root.
4. **Reconstruct Sentence:** Combine the modified words to form the final sentence.


To use this solution:

1. Clone this repository to your local machine.
2. Compile the `solution.cpp` file using a C++ compiler.
3. Run the compiled executable file.
4. The program will prompt you to input the array for which you want to find the missing element.
5. The program will output the missing element.

###### Feel free to contribute improvements or alternative solutions by creating a pull request.

