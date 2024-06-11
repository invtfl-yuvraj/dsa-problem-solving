#include <vector>
#include <iostream>
using namespace std;


class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    // Your code goes here
	    
	    string remaining = "";
	    int currCount = 0;
	    int index = 0;
	    
	    int i = 0;
	    
	    while (i < S.length() && currCount != count){
	        if (S[i] == ch){
	            currCount++;
	        }
	        i++;
	    }
	    
	    if (S.length() == i){
	        return "Empty string";
	    }
	    else {
	        remaining = S.substr(i++);
	    }
	    
	    return remaining;
	}
};