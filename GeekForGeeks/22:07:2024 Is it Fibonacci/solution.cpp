#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        long long sum=0;
        
        for(int j=0;j<K;j++){
            sum+=GeekNum[j];
        }
        
        for(int i=K;i<N;i++){
            GeekNum.push_back(sum);
            sum+=sum;
            sum-=GeekNum[i-K];
        }
        return GeekNum[N-1];
    }
};