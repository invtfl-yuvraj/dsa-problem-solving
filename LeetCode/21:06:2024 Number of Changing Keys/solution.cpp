#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {

        int n = s.size(), ans = 0;
        for(int i = 0 ; i < n - 1 ; i++){
            int diff = abs(s[i] - s[i + 1]);
            if(diff != 32 && diff != 0)
                ans++;
        }
        return ans;
        
    }
};