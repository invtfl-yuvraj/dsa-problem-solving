class Solution{   
public:
    int waysToBreakNumber(int N){
        // code here 
        
         int mod = 1000000007;

        long ans = (N+1)%mod;

        ans = ((ans%mod)*((N+2)%mod))%mod;

        ans/=2;

        ans%=mod;

        return (int)ans;
    }
};