#include <vector>
#include <iostream>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
       
       unordered_map<int, int> freqMap;
       vector<int> vec;
       
       for (int i = 0; i<n; i++){
           if (freqMap.find(arr[i]) != freqMap.end()){
               freqMap[arr[i]]++;
               if (freqMap[arr[i]] == 2){
                   vec.push_back(arr[i]);
               }
           }
           else {
               freqMap[arr[i]] = 1;
           }
       }
       
       if (vec.size() == 0){
           vec.push_back(-1);
       }
       
       sort(vec.begin(), vec.end());
       return vec;
    }
};