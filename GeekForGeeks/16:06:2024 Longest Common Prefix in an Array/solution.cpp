#include <vector>
#include <iostream>
using namespace std;

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        
        string ans = arr[0];
        
        if (N == 1){
            return ans;
        }
        
        int i = 1; 
        int j = 0;
        
        for (int i = 0; i < N; i++){
            string str = "";
            int j = 0;
            
            while (j < ans.length() && j < arr[i].length() && ans[j] == arr[i][j]){
                str += arr[i][j];
                j++;
            }
            
            ans = str;
            
            if (ans == ""){
                return "-1";
            }
        }
        
        return ans;
        
    }
};