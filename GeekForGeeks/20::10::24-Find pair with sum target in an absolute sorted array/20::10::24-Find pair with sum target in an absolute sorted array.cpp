//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> findPair(vector<int> &arr, int target) {
        // Your code here
        vector<int>a;
        sort(arr.begin(), arr.end());
        int i = 0;
        int j = arr.size() - 1;
        if(arr.size() < 2) {
            return a;
        }
        
        while(i < j) {
        int sum = arr[i] + arr[j];
        if(sum == target) {
            a.push_back(arr[i]);
            a.push_back(arr[j]);
            i++;
            j--;
        }
        if(sum > target) {
            j--;
        }
        else{
            i++;
        }
            
        }
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        vector<int> res = ob.findPair(arr, k);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            sort(res.begin(), res.end());
            for (int i = 0; i < res.size(); i++)
                cout << res[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends
