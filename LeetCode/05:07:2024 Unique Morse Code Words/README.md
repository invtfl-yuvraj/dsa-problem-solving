# Unique Morse Code Words

## Problem Statement

International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows:

'a' maps to ".-",
'b' maps to "-...",
'c' maps to "-.-.", and so on.

For convenience, the full table for the 26 letters of the English alphabet is given below:
[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]

Given an array of strings `words` where each word can be written as a concatenation of the Morse code of each letter.

For example, "cab" can be written as "-.-..--...", which is the concatenation of "-.-.", ".-", and "-...". We will call such a concatenation the transformation of a word.

Return the number of different transformations among all words we have.

## Examples

### Example 1:

**Input:**
words = ["gin","zen","gig","msg"]

**Output:**
2

**Explanation:**
The transformation of each word is:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."
There are 2 different transformations: "--...-." and "--...--.".


### Example 2:
**Input:**
words = ["a"]

**Output:**
1


## Constraints
- \(1 \leq words.length \leq 100\)
- \(1 \leq words[i].length \leq 12\)
- `words[i]` consists of lowercase English letters.

## Approach

1. **Mapping Morse Codes:**
   - Create a dictionary that maps each letter to its corresponding Morse code.

2. **Transform Words:**
   - For each word in the list, transform it into its Morse code representation by concatenating the Morse codes of its letters.

3. **Unique Transformations:**
   - Use a set to store unique Morse code transformations.
   - The size of this set will be the number of unique transformations.

4. **Return Result:**
   - Return the size of the set.

## Implementation

The solution to this problem can be implemented in the `solution.cpp` file included in this repository.


## How to Use
To use this solution:

1. Copy the code into a file named solution.cpp
2. Open a terminal and navigate to the directory containing solution.cpp