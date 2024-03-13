#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int index;
        int count = 0;
        string str = "";

        for (int i=s.length()-1; i>=0; i--){
            if (s[i]=='1'){
                index =i;
                break;
            }
        }

        for (int i=0; i<s.length(); i++){
            if(s[i]=='1' && i!=index){
                count++;
            }
        }

        for (int i=0; i<s.length(); i++){
            if (i<count || i == s.length()-1){
                str += '1';
            }
            else{
                str += '0';
            }
        }

        return str;

    }
};