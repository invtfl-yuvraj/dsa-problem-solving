#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution{
public:	
	bool sameFreq(string s)
	{
	    unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

    // Create a set to store unique frequencies
        unordered_set<int> freq_values;
        for (auto& p : freq) {
            freq_values.insert(p.second);
        }

    // If all characters have the same frequency, return true
        if (freq_values.size() == 1) {
            return true;
        }

    // If there are more than two unique frequencies, it's not possible to make frequencies same
        if (freq_values.size() > 2) {
            return false;
        }

    // If there are exactly two unique frequencies, check if removing one character can make frequencies same
        vector<int> freq_list;
        for (auto& p : freq) {
            freq_list.push_back(p.second);
        }
        sort(freq_list.begin(), freq_list.end());

        if (freq_list[0] == 1 && freq_list[1] - freq_list[0] == 1) {
          return true;
        }
        if (freq_list[freq_list.size() - 1] - freq_list[freq_list.size() - 2] == 1 &&
            freq_list[freq_list.size() - 1] == freq_list[freq_list.size() - 2] + 1) {
            return true;
        }

        return false;
	}
};