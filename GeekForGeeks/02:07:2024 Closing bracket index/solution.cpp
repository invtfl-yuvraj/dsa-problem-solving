
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
    public:
        int closing (string s, int pos)
        {
        	//code here.
        	
        	int open=0;
            for(int i=pos;i<s.size();i++){
                if(s[i]=='['){
                    open++;
                }else if(s[i]==']'){
                    open--;
                }else{
                    continue;
                }
                if(open==0){
                    return i;
                }
            }
        }
};