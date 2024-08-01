class Solution{
    public:
    int countSquare(int B)
    {
	    // code here 
	    
	    if(B<=2)
	    {
	        return 0;
	    }
	    else
	    {
	        int k=0;
	        for(int i=0;i<B/2;i++)
	        {
	            k+=i;
	        }
	        return k;
	    }
    }
};