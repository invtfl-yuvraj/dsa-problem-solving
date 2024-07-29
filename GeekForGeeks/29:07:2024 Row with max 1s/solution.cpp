#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        
        int ans=-1;
         int max=0;
        for(int r=0;r<arr.size();r++)
        {
            int count=0;
            for(int c=0;c<arr[r].size();c++)
            {
                if(arr[r][c]==1)
                  count++;
            }
            if(count>max)
            {
              max=count;
              ans=r;
            }
        }
        if(max==0)
            return -1;
        
        return ans;
    }
};