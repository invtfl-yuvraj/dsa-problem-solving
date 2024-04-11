#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> vec;
        int i = 0;

        while (i < intervals.size() && intervals[i][1] < newInterval[0]) {
            vec.push_back({intervals[i][0], intervals[i][1]});
            i++;
        }

        while (i < intervals.size() && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        vec.push_back({newInterval[0], newInterval[1]});

        while (i < intervals.size()) {
            vec.push_back({intervals[i][0], intervals[i][1]});
            i++;
        }

        return vec;
    }
};