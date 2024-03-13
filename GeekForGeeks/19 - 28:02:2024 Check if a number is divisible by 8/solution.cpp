#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
    int DivisibleByEight(string s){
        int num;
        
        if (s.length()>=3){
            string str= s.substr(s.length()-3);
            num = stoi(str);
            
        }
        else {
            num = stoi(s);
        }

        if (num%8==0 || num ==0){
            return 1;
        }
        else {
            return -1;
        }
    }
};