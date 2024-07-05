#include <stack>
#include <vector>
#include <iostream>
using namespace std;


class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        vector <int> vec;
        
        int openCount = 0;
        
        stack<int> st;
        
        for (int i = 0 ; i < str.size(); i++){
            if (str[i] == '('){
                openCount++;
                vec.push_back(openCount);
                st.push(openCount);
            }
            else if (str[i] == ')'){
                vec.push_back(st.top());
                st.pop();
            }
        }
        
        return vec;
    }
};