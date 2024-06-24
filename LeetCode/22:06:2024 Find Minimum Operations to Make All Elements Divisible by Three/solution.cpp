#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int moves = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > 3 || nums[i] < 3){
                moves+= min(nums[i] % 3, 3 -nums[i] % 3);
            }
        }
        return moves;
    }
};