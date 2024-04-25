#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> vec;

        unordered_map<int, int> freqMap;

        for (int i=0; i<nums.size(); i++){

            if (freqMap.find(nums[i]) != freqMap.end()) {
                freqMap[nums[i]]++;
            }
            else {
                freqMap[nums[i]] = 1;
            }

            if (freqMap[nums[i]] > 1) {
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }
};