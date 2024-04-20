#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    vector<int> Series(int n) {
        
        vector <int> vec;
        
        long long int start = 0;
        long long int next = 1;
        long long int res = 0;
        
        const int modulo = 1000000007;
        
            if (n >= 0){
                vec.push_back(start);
            }
            if (n >= 1){
                vec.push_back(next);
            }
        
            for (int i = 2; i <= n ; i++){
            
            res = start + next;
            start = next % modulo;
            next = res % modulo;
            
            res = res % modulo;
            vec.push_back(res);
        }
        
        return vec;
    }
};