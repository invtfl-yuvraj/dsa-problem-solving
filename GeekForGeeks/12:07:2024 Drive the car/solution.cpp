class Solution{
    public:
        long long required(long long arr[], long long n, long long k) {
        // Your code goes here
        
        long long maxi=-1;
        
        for(long long i=0;i<n;i++){
            if(maxi<arr[i]) maxi=arr[i];
        } 
        
        if(k<maxi) return(maxi-k);
        
        return(-1);    
    }
};