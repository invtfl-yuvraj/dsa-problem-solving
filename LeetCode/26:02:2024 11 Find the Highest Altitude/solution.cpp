#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> arr(gain.size()+1);
        arr[0] = 0;

        for (int i = 0; i<gain.size(); i++){
            arr[i+1] = arr[i] + gain[i];
        }

        int max = arr[0];

        for (int j=1; j<gain.size()+1; j++){
            if (arr[j]>max){
                max = arr[j];
            }
        }

        return max;
    }
};