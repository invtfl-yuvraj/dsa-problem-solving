#include <vector>
#include <iostream>
using namespace std;

class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int> vec;
            
            int count = 0;
            for (int i=0; i<text.length()-pattern.length()+1; i++){
                for (int j=i; j<text.length(); j++){
                    if (text[j] != pattern[count]){
                        count =0;
                        break;
                    }
                    else {
                        count ++;
                        if (count == pattern.length()){
                            vec.push_back(j-count+2);
                            count = 0;
                            break;
                        }
                    }
                }
            }
            return vec;
        }
     
};