#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
         unordered_set<char>s(allowed.begin(),allowed.end());
        for(int i=0;i<words.size();i++)
        {
            int flag=0;
            for(int j=0;j<words[i].size();j++)
            {
                if(s.find(words[i][j])==s.end())
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)ans++;
        }
        return ans;
    }
};