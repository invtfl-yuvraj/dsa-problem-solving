#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
         vector<int> arr1(n);
        vector<int> arr2(n);

        for (int i =0; i<2*n; i++){
            if(i<n){
                arr1[i] = nums[i];
            }
            else{
                arr2[i-n] = nums[i];
            }
        }

        int l=0;
        int k=0;

        for (int i=0; i<2*n; i++){
            if(i%2==0){
                nums[i] = arr1[l];
                l++;
            }
            else {
                nums[i] = arr2[k];
                k++;
            }
        }

        return nums;
    }
};