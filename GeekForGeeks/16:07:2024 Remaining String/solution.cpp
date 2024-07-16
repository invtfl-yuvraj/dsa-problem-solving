#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        
        int index;
        
        for (int i = 0; i < s.length(); i++){
            
            if (s[i] == ch){
                count--;
            }
            
            if (count == 0){
                return s.substr(i+1);
            }
        }
        
        string str = "";
        
        return str;
    }
};