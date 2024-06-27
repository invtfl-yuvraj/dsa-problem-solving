#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {

        vector<int> vec;

        for (int i = 0; i < nums.size()-1; i+=2){

            int freq = nums[i];

            for (int j = 0;  j < freq; j++){
                vec.push_back(nums[i+1]);
            }

        }

        return vec;
        
    }
};