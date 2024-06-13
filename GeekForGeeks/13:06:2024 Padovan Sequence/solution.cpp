#include <vector>
#include <iostream>
using namespace std;


class Solution {
  public:
    int padovanSequence(int n) {
        // code here.
        
        int p0 = 1;
        int p1 = 1; 
        int p2 = 1;
        int pi = 0;
        int mod = 1000000007;
        
        if (n == 1 || n == 2){
            return 1;
        }
        
        for (int i = 3; i <= n; i++){
            pi = (p1 + p0) % mod;
            p0 = p1 % mod;
            p1 = p2 % mod;
            p2 = pi % mod;
        }
        
        return pi;
    }
};