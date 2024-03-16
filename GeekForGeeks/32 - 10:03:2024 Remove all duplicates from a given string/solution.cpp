#include <vector>
#include <iostream>
using namespace std;

class Solution{
public:
	string removeDuplicates(string str) {
	    
	    string strNew = "";
	    unordered_map<char, int> freqMap;
	    
	    for (int i=0; i<str.length(); i++){
	        if (freqMap.find(str[i]) != freqMap.end()){
	            continue;
	        }
	        else {
	            freqMap[str[i]] = 1;
	            strNew += str[i];
	        }
	    }
	    return strNew;
	}
};