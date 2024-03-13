#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
        
        unordered_map<int, int> frequencyMap;

        for (int i = 0; i < n; i++) {
            
            if (frequencyMap.find(a[i]) != frequencyMap.end()) {
                frequencyMap[a[i]]++;
            } else {
                frequencyMap[a[i]] = 1;
            }
            
            if (frequencyMap[a[i]] == k) {
                return a[i];
            }
        }

        return -1;
    }
};