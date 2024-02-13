//{ Driver Code Starts
// Initial template for C++

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
// Include other necessary headers

using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum = 0;
        
        for (int i=0; i<n-1; i++){
            sum += array[i];
        }
        
        int totalSum = 0;
        int num = n;
        while (num>0){
            totalSum += num;
            num--;
        }
        
       return totalSum - sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends