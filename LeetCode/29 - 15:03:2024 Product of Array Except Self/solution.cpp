#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> vec(nums.size());
        for (int i = 0; i < vec.size(); i++){
            vec[i] = 1;
        }

        int leftProd = 1;
        int rightProd = 1;

        for (int i = 0; i < nums.size(); i++){
            vec[i] *= leftProd;
            leftProd *= nums[i];
        }

        for (int i = nums.size()-1; i>=0; i--){
            vec[i] *= rightProd;
            rightProd *= nums[i];
        }

        return vec;
    }
};