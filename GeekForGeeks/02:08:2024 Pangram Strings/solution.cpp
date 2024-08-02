#include <unordered_set>
#include <string>
#include <vector>
#include <iostream>
using namespace std;


class Solution{
public:	
	
	int isPanagram(string S)
	{
	    // Your code goes here 
	     unordered_set<char> s1;
       
       for(auto x : S)
       {
           if(isalpha(x))
           s1.insert(tolower(x));
       }
       
       if(s1.size() == 26)
       return 1;
       return 0;
	}

};