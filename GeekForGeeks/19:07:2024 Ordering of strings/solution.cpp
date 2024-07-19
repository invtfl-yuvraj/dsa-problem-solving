#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
    vector<string> orderString(string s[], int n)
    {
    	//code here.
    	vector<string>v,v1;
        if(n==1)
        {
            v1.push_back(s[0]);
            v1.push_back(s[0]);
            return v1;
        }
        sort(s,s+n);
        v1.push_back(s[0]);
        v1.push_back(s[n-1]);
        return v1;
    }
    
};