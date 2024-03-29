#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> freqMap;

        int count = 0;
        int length = 0;
        for (int i =0; i< nums.size(); i++) {

            if (nums[i] == 0){
                count--;
            }
            else {
                count++;
            }

            if (count == 0){
                length = i+1;
            }
            else if (freqMap.find(count) != freqMap.end()){
                length = max(length, i - freqMap[count]);
            }
            else {
                freqMap[count] = i;
            }
        }

        return length;
    } 
};