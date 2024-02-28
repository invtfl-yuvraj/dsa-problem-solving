#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string newS = "";
        for (int i=s.size()-1; i>=0; i--){
            newS += s[i];
        }

        if (newS == s){
            return true;
        }
        
        return false;
    }
};