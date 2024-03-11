#include <vector>
#include <iostream>
using namespace std;

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        
        vector<int> vec(2);
        
        sort(arr.begin(), arr.end());
        
        int sum =0;
        int sum2 =0;
        
        for (int i=0; i<=n;i++){
            sum+=i;
        }
        
        for (int i=0; i<n-1; i++){
            if(arr[i] == arr[i+1]){
                vec[0] = arr[i];
                sum2 -= arr[i];
            }
        }
        
        for (int i=0; i<n; i++){
            sum2 += arr[i];
        }
        
        vec[1] = sum-sum2;
        
        return vec;
    }
};