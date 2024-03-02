#include <vector>
#include <iostream>
using namespace std;  

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        
        int left = 0;
        int right = a.size()-1;
        int max = a[0];
        
        while(left<=right) {
            int mid = left+(right-left)/2;
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
                max = a[mid];
            }
            if(a[mid]<a[mid+1]) {
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return max;
        
    }
};



