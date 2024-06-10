#include <vector>
#include <iostream>
using namespace std;


class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       
       unordered_map <char, int> mp;
       
       for (int i = 0; i < S.length(); i++){
           if (mp.find(S[i]) != mp.end()){
               mp[S[i]]++;
           }
           else {
               mp[S[i]] = 1;
           }
       }
       
       for (int i = 0; i < S.length(); i++){
           if (mp[S[i]] == 1){
               return S[i];
           }
       }
       
       return '$';
       
    }

};