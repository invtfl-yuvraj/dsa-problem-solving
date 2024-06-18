#include <vector>
#include <iostream>
using namespace std;


int minChange(string S) { 
     //complete the function here
     
     int cnt=0;
     unordered_map<char,int>mp;
     for(int i=0;i<S.size();i++){
         mp[S[i]]=0;
     }
     for(int i=0;i<S.size();i++){
            mp[S[i]]++;
            if(mp[S[i]]>1){
                cnt++;
            }
     }
     return cnt;
}