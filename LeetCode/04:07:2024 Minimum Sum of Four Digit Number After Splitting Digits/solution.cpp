#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {

        string nums = to_string(num);
        sort(nums.begin(),nums.end());
        char nums1 = nums[0];
        char nums2 = nums[1];
        char nums3 = nums[2];
        char nums4 = nums[3];

        string ans1 = "";
        ans1 += nums1;
        ans1 += nums4;
        string ans2 = "";
        ans2 += nums2;
        ans2 += nums3;

        return stoi(ans1) + stoi(ans2);
        
    }
};