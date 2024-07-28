#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    unordered_map<char,int>freqMap;
        string str="";
        
        for(int i=0;i<S.size();i++)
        {
            freqMap[S[i]]++;
            
            if(freqMap[S[i]]==1){
                str+=S[i];
            }
        }
       return str;
	}
};