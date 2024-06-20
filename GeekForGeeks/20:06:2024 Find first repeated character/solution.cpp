#include <vector>
#include <iostream>
using namespace std;

string firstRepChar(string s)
{
    //code here.
    
    unordered_map <char, int> mp;
    string ans = "-1";
    
    for (int i = 0 ; i < s.size(); i++){
        if (mp.find(s[i]) != mp.end()){
            mp[s[i]]++;
        }
        else {
            mp[s[i]] = 1;
        }
        
        if (mp[s[i]] > 1){
            ans = s[i];
            break;
        }
    }
    
    return ans;
}