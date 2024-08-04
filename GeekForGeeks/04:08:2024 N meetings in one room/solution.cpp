#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        
        vector<pair<int,int>>vp ;  
        
        for(int i = 0 ; i < n ; i ++) 
        {
            vp.push_back({end[i],start[i]}) ; 
        } 
        
        sort(vp.begin(),vp.end()) ;  
        int cnt = 1; 
        int st = 0 ; 
        
        for(int i =  1 ; i < n ; i ++) 
        {
            if(vp[st].first < vp[i].second)  
            {
                cnt++ ; 
                st = i ;  
            }
        }
        return cnt;  
    }
};