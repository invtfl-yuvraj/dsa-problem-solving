#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        // code here
        long long int k=0;
        for(int i=0;i<N;++i){
            k+=A[i];
        }
        int mini = INT_MAX;
        for(long long int i=0;i<N;++i){
            long long int t=(long long)N*A[i];
            if(k<=t){
            mini = min(mini,A[i]);
            }
        }
        return mini;
    }
};