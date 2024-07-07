
#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:

    int getSegments(vector<int> arr, int n, int x) {

        // Your code here
        
        int res = 0;
        int count = 1;
        
        for (int i= 0; i < n; i++){
            res |= arr[i];
            if (res > x){
                count++;
                res = arr[i];
            }
        }
        return count;
    }
};