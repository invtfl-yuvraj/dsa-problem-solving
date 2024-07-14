#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        // Code here
        
        int result=arr[0];
        for(int i=1;i<n;i++){
        result=__gcd(result,arr[i]);
        }
        return result;
    }
};