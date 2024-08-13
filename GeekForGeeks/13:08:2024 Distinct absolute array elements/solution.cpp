#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;


class Solution {
  public:
    int distinctCount(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        unordered_set<int>s;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                arr[i]=-arr[i];
            }
            s.insert(arr[i]);
        }
        return s.size();
    }
};