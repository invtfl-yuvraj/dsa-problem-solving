#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    string compareFrac(string str) {
        // Code here
        vector<int> vec(4);
        int k = 0,i = 0; 
        string temp = "";
        
        while (i < str.size()){
            if (str[i] == ' ' || str[i] == ',' || str[i] == '/'){
                if (temp != ""){
                    vec[k++] = stoi(temp);
                    temp = "";
                }
            }
            else {
                temp += str[i];
            }
            i++;
        }
        
        if (temp != ""){
            vec[k] = stoi(temp);
        }
        
        double a = vec[0], b = vec[1], c = vec[2], d = vec[3];
        double frac1= a/b;
        double frac2 = c/d;
        
        if (frac1 == frac2){
            return "equal";
        }
        else if (frac1 > frac2){
            return (to_string(vec[0]) + "/" + to_string(vec[1]));
        }
        else {
            return (to_string(vec[2]) + "/" + to_string(vec[3]));
        }
    }
};