#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        
        int countZero = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                countZero++;
            }   
        }


        for (int i = 0; i < countZero; i++) {
            arr[i] = 0;
        }

        for (int i = countZero; i < n; i++) {
            arr[i] = 1;
        }
    }
};