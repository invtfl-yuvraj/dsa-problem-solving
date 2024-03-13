#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        int mid = left + (right-left)/2;

        while (left<=right){
           if (nums[mid]< target){
                left = mid+1;
            }
            else if (nums[mid]> target){
                right = mid-1;
            }
            else {
                return mid;
            }
            mid = left + (right-left)/2;
        }

        return left;
    }
};