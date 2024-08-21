#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    void sortIt(vector<long long>& arr) {
        // code here.
        
        int n = arr.size();
        
        vector<long>x1,x2;
        int i=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                x1.push_back(arr[i]);
            }
            else
            {
                x2.push_back(arr[i]);
            }
        }
        sort(x1.begin(),x1.end());
        sort(x2.begin(),x2.end(),greater<long>());
        for(int i=0;i<x2.size();i++)
        {
           arr[i]=x2[i];
        }
         for(int i=x2.size();i<n;i++)
        {
           arr[i]=x1[j++];
        }
    }
};