#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {

        unordered_map<string, bool> mp;
        int count = 0;

        for (int i = 0; i < words.size(); i++) {

            string st = words[i];
            reverse(st.begin(), st.end());

            if (mp.find(st) != mp.end()) {
                count++;
            } else {
                mp[words[i]] = 1;
            }
        }
        return count;
    }
};