#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int sum = 0;
        for (int i =1; i<n+1; i++){
            sum += i;
        }

        int leftSum =0;
        int rightSum =0;

        for (int i=1; i<n+1; i++){
            leftSum += i;

            rightSum = sum - leftSum + i;

            if (rightSum == leftSum){
                return i;
            }
            else if(rightSum < leftSum ){
                return -1;
            }
        }
        return -1;
    }
};