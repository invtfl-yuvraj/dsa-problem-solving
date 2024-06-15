#include <vector>
#include <iostream>
using namespace std;

class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           unordered_map <string, int> mp;
           int count = 0;
           
           for (int i = 0; i < n; i++){
               if (mp.find(list[i]) != mp.end()){
                   mp[list[i]]++;
               }
               else {
                   mp[list[i]] =1;
               }
           }
           
           for (auto it:mp){
               if (it.second == 2) count++;
           }
           
           return count;
           
        }

};