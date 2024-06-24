#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(), nums.end());
        float min;
        
        if (n<2){
            return 0.0;
        }

        for (int i = 0; i < n / 2; i++) {

            int minElm = nums[i];
            int maxElm = nums[n - i - 1];

            float avg = (minElm + maxElm)/2.0;
            if ( i==0 || avg < min){
                min = avg;
            }
        }

        return min;
    }
};