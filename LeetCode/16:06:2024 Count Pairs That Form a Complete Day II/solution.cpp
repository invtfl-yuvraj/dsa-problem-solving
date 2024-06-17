#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        
        unordered_map<long long, long long> mp;
        
        for (int i = 0; i < hours.size(); i++){
            int remainder = hours[i] % 24;
            mp[remainder]++;
        }
        
        long long int pairs = 0;
        
        if (mp.find(0) != mp.end()){
            long long int n = mp[0];
            pairs += (n*(n-1))/2;
        }
        
        if (mp.find(12) != mp.end()){
            long long int n = mp[12];
            pairs += (n*(n-1))/2;
        }
        
        for (int i = 0; i < 12; i++){
            if (mp.find(i) != mp.end() && mp.find(24-i) != mp.end()){
                pairs += mp[i]*mp[24-i];
            }
        }
        
        return pairs;
        
    }
};