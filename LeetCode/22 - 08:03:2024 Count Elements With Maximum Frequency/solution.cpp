#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> frequencyMap;


        int maxFrequency = 0;
        for (int num : nums) {
            maxFrequency = max(maxFrequency, ++frequencyMap[num]);
        }


        int count = 0;
        for (const auto& pair : frequencyMap) {
            if (pair.second == maxFrequency) {
                count++;
            }
        }

        return count * maxFrequency;
    }
};