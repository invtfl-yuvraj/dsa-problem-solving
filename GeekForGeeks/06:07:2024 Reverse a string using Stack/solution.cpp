#include <stack>
#include <vector>
#include <iostream>
using namespace std;

char* reverse(char *S, int len)
{
    //code here
    
    stack <char> st;
    
    for (int i =0; i < len; i++){
        st.push(S[i]);
    }
    
    int i = 0;
    
    while (!st.empty()){
            
        S[i] = st.top();
        st.pop();
        i++;
        
    }
    
    return S;
    
    
}