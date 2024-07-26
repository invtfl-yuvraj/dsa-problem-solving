#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum (n);
        vector<int> rightsum (n);
        vector<int> difference(n);
        leftsum[0] = rightsum[n-1] = 0;

        for(int i = 1 ; i< n ; i++){
            leftsum[i] = leftsum[i-1] + nums[i-1];
        }

        for(int j = n-2 ; j >= 0 ; j--){
           rightsum[j] = rightsum[j+1] + nums[j+1] ;
        }

        for(int k = 0 ; k< n ; k++){
            difference[k] = abs(leftsum[k] - rightsum[k]);
        }

        return difference;
    }
};