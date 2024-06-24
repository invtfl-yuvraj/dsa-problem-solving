#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums) {

        int moves = 0;
        int i = 0;
        int n = nums.size();

        while (i < n ) {

            if (nums[i] == 0) {
                if (i + 2 >= n) {
                    return -1;
                }
                nums[i] = !nums[i];
                nums[i + 1] = !nums[i + 1];
                nums[i + 2] = !nums[i + 2];
                moves++;
            }
            i++;
        }
        return moves;
    }
};