#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
  
  
    long long maximumSum(int n, int k) {
        // code here
        
        long long int sum = 0;
        
        if (n%2 == 0) n--;
        
        while (n>0 && k > 0){
            bool isComposite = false;
        
            for (int i = 3; i * i <= n; i += 2) {
                if (n % i == 0) {
                    isComposite = true;
                    break;
                }
            }
        
            if (isComposite || n==1) {
                sum += n;
                k--;
            }
        
            n -= 2;
        }
        
        if (k>0){
            return -1;
        }
        return sum;
    }
};