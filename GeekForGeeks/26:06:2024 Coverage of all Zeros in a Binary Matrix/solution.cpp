#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        
        int ans=0;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    if(i>0){
                        if(matrix[i-1][j]==1) ans++;
                    }
                    if(j>0){
                        if(matrix[i][j-1]==1) ans++;
                    }
                    if(j<c-1){
                        if(matrix[i][j+1]==1) ans++;
                    }
                     if(i<r-1){
                        if(matrix[i+1][j]==1) ans++;
                    }
                }
            }
        }
        return ans;
    }
};