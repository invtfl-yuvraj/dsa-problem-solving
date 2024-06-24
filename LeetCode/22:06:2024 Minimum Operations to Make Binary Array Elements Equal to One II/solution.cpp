#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {

        int n = nums.size();
        int moves = 0;
        int isFlipped = false;

        for (int i = 0; i < n; i++) {

            if (nums[i] == isFlipped) {
                moves++;
                isFlipped = !isFlipped;
            }
        }

        return moves;
    }
};