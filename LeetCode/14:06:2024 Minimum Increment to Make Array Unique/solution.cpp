#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int moves = 0;
        
        for (int i = 0 ; i < nums.size()-1; i++){
            if (nums[i] >= nums[i+1]){
                moves+= nums[i] - nums[i+1] + 1;
                nums[i+1] = nums[i] + 1;
            }
        }
        return moves;
    }
};