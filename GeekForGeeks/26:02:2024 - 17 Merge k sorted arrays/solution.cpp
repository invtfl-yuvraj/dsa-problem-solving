//User function Template for C++
#include <vector>
#include <iostream>
using namespace std;  

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector <int> output(K*K);
        
        int n = 0;
        for (int i=0; i<K; i++){
            for (int j =0; j<K; j++){
                output[n] = arr[i][j];
                n++;
            }
        }
        
        sort(output.begin(), output.end());
        return output;
    }
};