#include <vector>
#include <iostream>
using namespace std;

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        string s2 = "";
       for (int i =0; i<r ; i++){
           for (int j =0; j< s.length(); j++){
               if(s[j] == '0'){
                   s2 += "01";
               }
               else {
                   s2 += "10";
               }
               
               if (s2.length()>n){
                   break;
               }
           }
           
           s = s2;
           s2 = "";
       }
       
       return s[n];
    }
    
};