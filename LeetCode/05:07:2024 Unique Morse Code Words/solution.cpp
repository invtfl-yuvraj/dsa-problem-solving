#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector <string> vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set <string> symbols;

        for (int i = 0; i < words.size(); i++){

            string temp;
            for (int j = 0; j < words[i].size(); j++){
                int n = words[i][j];
                temp += vec[n - 'a'];
            }

            symbols.insert(temp);
        }

        return symbols.size();
    }
};
