#include <vector>
#include <iostream>
using namespace std;

class Solution{
public:
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        // code here
        long long int x = max(L,B);
        long long int y = min(L,B);
        
        while(y) {
            long long int t = y;
            y = x%y;
            x = t;
        }
        
        long long int l = L/x;
        long long int b = B/x;
        
        return {l*b,x};
    }
};