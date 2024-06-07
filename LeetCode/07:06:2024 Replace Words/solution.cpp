#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;


class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {

        unordered_set<string> set(dictionary.begin(), dictionary.end());

        string newSentence = "";
        string word = "";

        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == ' ') {
                word += " ";
                newSentence += word;
                word = "";
            } else {
                word += sentence[i];
                if (set.count(word)) {
                    newSentence += word;
                    word = "";
                    while (i < sentence.size() && sentence[i] != ' ') {
                        i++;
                    }
                    if (i < sentence.size()) {
                        newSentence += " ";
                    }
                }
            }
        }
        newSentence += word;
        return newSentence;
    }
};