#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int i =0;
        int j = s.length()-1;

        while (i<j){
            if (s[i] != s[j]){
                return j-i+1;
            }

            while (i<s.length()-1 && s[i] == s[i+1] ){
                i++;
            }
            while (j>0 && s[j]==s[j-1]){
                j--;
            }

            i++;
            j--;
            
        }
        if (i==j){
            return 1;
        }
        return 0;
    }
};