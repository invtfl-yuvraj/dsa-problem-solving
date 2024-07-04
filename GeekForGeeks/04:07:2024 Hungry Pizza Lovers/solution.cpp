
#include <vector>
#include <iostream>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n)
{
    
    // Complete the function
    
    vector<int> v;
    vector<pair<int,int>> ans;
    
    for(int i=0;i<n;i++){
        int sum=arr[i][0]+arr[i][1];
        ans.push_back({sum,i});
    }
    
    sort(ans.begin(),ans.end());
    
    for(int i=0;i<ans.size();i++){
        v.push_back(ans[i].second+1);
    }
    
    return v;
    
}