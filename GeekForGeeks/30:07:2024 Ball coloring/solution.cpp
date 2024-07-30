class Solution {
  public:
    unsigned long long int noOfWays(unsigned long long int n){
        // code here
        
        int sum=0,count=1;
        
        for(int i=1;i<n;i++)

        {

         int temp=0;

            temp=count*2;

            sum=sum+temp;

            count++;

        }

        return sum+2;
    }
};