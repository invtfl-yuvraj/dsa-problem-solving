#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
  public:
    vector<int> getPrimes(int n) {
        // code here
        
        vector<int> is_prime(n+1, true);
        vector<int> primes;
        
        is_prime[0] = is_prime[1] = false;
        
        for (int p = 2; p <= n; p++){
            if (is_prime[p]){
                primes.push_back(p);
                
                if (p <= n/p){
                    for (int i = p*p; i <= n; i+=p){
                    is_prime[i] = false;
                    }
                }
                
            }
        }
        
        unordered_set<int> mpset(primes.begin(), primes.end());
        
        
        for (int i = 0; i < primes.size(); i++){
            if (mpset.count(n - primes[i])){
                return {primes[i], n-primes[i]};
            }
        }
        
        return {-1,-1};
        
    }
};