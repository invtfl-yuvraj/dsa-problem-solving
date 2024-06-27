#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]] = i;
        }

        int ans;
        vector<int> vec;

        for (int i = 0; i < nums1.size(); i++) {

            int ans = -1;
            for (int j = mp[nums1[i]]; j < nums2.size(); j++) {
                if (nums2[j] > nums1[i]) {
                    ans = nums2[j];
                    break;
                }
            }

            vec.push_back(ans);
        }

        return vec;
    }
};