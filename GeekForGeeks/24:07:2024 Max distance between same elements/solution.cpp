#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
    unordered_map<int, int> pos;
    int m = 0;
    for(int i=0; i<n; i++) {
        if(pos.find(arr[i]) == pos.end())
            pos[arr[i]] = i;
        else
            m = max(m, i - pos[arr[i]]);
    }
    return m;
    }
};