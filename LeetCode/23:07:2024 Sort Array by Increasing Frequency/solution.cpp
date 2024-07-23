#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {
                mp[nums[i]]++;
            } else {
                mp[nums[i]] = 1;
            }
        }

        sort(nums.begin(), nums.end(), [&](int n1, int n2) {
            if (mp[n1] != mp[n2]) {
                return mp[n1] < mp[n2];
            } else {
                return n2 < n1;
            }
        });

        return nums;

        }
    };