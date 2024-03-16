#include <vector>
#include <iostream>
using namespace std;

class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
        int start=0,end=n*n-1,ans=0;
        
	    while(start<(n*n) && end>=0)
	    {
	        if(mat1[start/n][start%n]+mat2[end/n][end%n]>=x)
	        {
	            if(mat1[start/n][start%n]+mat2[end/n][end%n]==x)
	            ans++;
	            end--;
	        }
	        else
	        start++;
	    }
	    return ans;
	}
};