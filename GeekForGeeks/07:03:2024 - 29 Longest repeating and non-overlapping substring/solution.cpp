#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    string longestSubstring(string s, int n) {
        string ans = "-1";
        for(int i = 0, j = 0; j<n; ++j){
            string t = s.substr(i,j-i+1);
            if(s.find(t,j+1)!=-1) {
                ans = t;
            }  
            else {
                i++;
            }
            
        }
        return ans;
    }
};