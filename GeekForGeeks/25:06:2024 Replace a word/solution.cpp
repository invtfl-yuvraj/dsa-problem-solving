#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    string replaceAll(string str, string oldW, string newW) {
        // code here
        
    int oldSLength = oldW.length(), newSLength = newW.length();
    string temp = "";
    int i=0,j=0;
    j = str.find(oldW,j);
    while(i < str.length()){
        if(j==i){
            i += oldSLength;
            j = str.find(oldW,i);
            temp += newW;
            continue;
        }
        temp += str[i++];
    }
        return temp;
    }

};