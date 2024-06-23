#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    int geekCount(string s) {
        // code here
        const int modulo = 1000000007;
        
        
        int g_count = 0;
        int ge_count = 0;
        int gee_count = 0;
        int geek_count = 0;
        
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'g') {
               g_count = (g_count + 1) % modulo;
            } else if(s[i] == 'e') {
                gee_count = (gee_count + ge_count) % modulo;
                ge_count = (ge_count + g_count) % modulo;
            } else if(s[i] == 'k') {
                 geek_count = ( geek_count + gee_count) % modulo;
            }
        }
        
        return  geek_count;
    }
};