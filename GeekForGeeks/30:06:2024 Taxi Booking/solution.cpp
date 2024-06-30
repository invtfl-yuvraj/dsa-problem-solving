#include <vector>
#include <iostream>
using namespace std;

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        
        int mintime=INT_MAX;
        for(int i=0;i<N;i++)
        {
            mintime=min((abs(cur-pos[i])*time[i]), mintime);
        }
        
        return mintime;
        
    }
};