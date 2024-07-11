#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        
        unordered_set <char> set;
        
        for (int i =0; i < s.length(); i++){
            if (isalpha(s[i])){
                set.insert(tolower(s[i]));
            }
        }
        
        return set.size() == 26;
    }

};