#include <vector>
#include <iostream>
using namespace std;

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        
        int getOddOccurrence(int arr[], int n) ;
        // code here
        int ele = arr[0];
        unordered_map<int,int>freqMap;
        for(int i = 0; i < n; i++) {
            if(freqMap.find(arr[i]) != freqMap.end()) {
                freqMap[arr[i]]++;
            }
            else{
                freqMap[arr[i]] = 1;
            }
        }
        for(int i = 0; i < n; i++) {
            if(freqMap[arr[i]] % 2 != 0) {
                ele = arr[i];
            }
        }
        return ele;
    }
    
};