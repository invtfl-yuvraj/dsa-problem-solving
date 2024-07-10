#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        
        unordered_set <char> set;
        
        for (int i =0; i < patt.length(); i++){
            set.insert(patt[i]);
        }
        
        for (int i =0; i< str.length(); i++){
            if (set.find(str[i])!= set.end()){
                return i;
            }
        }
        return -1;
    }
};