#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
         unordered_map<char,int> m;
        int l=0;
        for(auto x : str){
            if(x == ' '){continue;}
            l++;
            m[x]++;
        }
        if(l < 26){return false;}
        if(m.size() == 26){return true;}
        if(26-m.size() <= k){return true;}
        return false;
    }
};