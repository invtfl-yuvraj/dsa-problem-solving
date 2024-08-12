#include <map>
#include <vector>
#include <iostream>
using namespace std;

long long int calculate(int a[], int n)
{
    // Complete the function
    map<int,int>m;
    
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    
    long long int ans=0;
    
    for(auto i:m){
        if(i.second>1){
            ans+=(i.second*(i.second-1))/2;
        }
    }
    return ans;
}