#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freqMap;
        vector<int> vec;

        int i=0;
        int j=0;

        sort(nums1.begin(), nums1.end());
        sort (nums2.begin(), nums2.end());

        while (i<nums1.size()&& j<nums2.size()){
            if (nums1[i]==nums2[j]){
                if(freqMap.find(nums1[i]) != freqMap.end()){
                    freqMap[nums1[i]]++;
                }
                else {
                    freqMap[nums1[i]] = 1;
                }

                if (freqMap[nums1[i]] == 1){
                    vec.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if (nums1[i]<nums2[j]){
                i++;
            }
            else {
                j++;
            }
        }
        return vec;
    }
};