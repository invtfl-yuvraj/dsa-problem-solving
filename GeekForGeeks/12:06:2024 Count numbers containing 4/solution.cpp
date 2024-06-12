#include <vector>
#include <iostream>
using namespace std;


class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        
        int count = 0; 
        
        for (int i = 1; i <= n; i++){
            string numStr = to_string(i);
            
            for (int j = 0; j < numStr.length(); j++){
                if (numStr[j] == '4'){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};