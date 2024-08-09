#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    int Maximize(vector<int> &arr) {
        // Complete the function
        long long int sum=0;
        long long int a=0;
        sort(arr.begin(),arr.end());
        for(long int i=0;i<arr.size();i++){
            sum=arr[i]*i;
            a+=sum;
        }
         return a % 1000000007 ;
    }
};