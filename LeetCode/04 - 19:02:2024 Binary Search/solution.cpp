#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0;
        int r = nums.size()-1;
        int mid = l + (r-l)/2 ;
       
        while (l<=r){
            
        if (target==nums[mid]){
            return mid;
        }
        else if (target<nums[mid]){
            r = mid-1;
        }
        else {
            l = mid + 1;
        }
        mid = l + (r-l)/2 ;
    }
    return -1;
    }
};