class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        
        int totalsum = 0;
        int leftSum =0;
        int rightsum = 0;
    
       for (int i=0; i<n; i++){
           totalsum += a[i];
       }
       
       for (int j=0; j<n; j++){
           if (j!=0){
               leftSum += a[j-1];
           }
           
           rightsum = totalsum - a[j] - leftSum;
           
           if (leftSum == rightsum){
               return j+1;
           }
           
       }
       return -1;
    }

};