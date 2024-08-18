#include <vector>
#include <iostream>
using namespace std;


class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        int sum = 0;
        for(auto it : arr) sum += it;
        
        if(sum % 2) return false;
        
        int firstHalf = 0;
        for(int i=0; i<n; i++){
            firstHalf += arr[i];
            int secHalf = sum - firstHalf;
            if(firstHalf == secHalf) return true;
        }
        
        return false;
    }
};