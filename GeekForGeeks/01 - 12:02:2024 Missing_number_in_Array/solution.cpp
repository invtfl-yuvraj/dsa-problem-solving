// Missing Number in Array
// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

// Initial template for C++

#include <vector>
#include <iostream>
using namespace std;



// Code for Geek for Geeks start here ...... 

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

// Code for Geek for Geeks ends here ...... 





// Addition code to run file on Vscode starts here ..........

int main() {
        int n;
        cout << "Enter size of array : ";
        cin >> n;
        cout << "Enter elements of array (seperated by space) : ";
        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << "Ans : " <<obj.missingNumber(array, n) << "\n";
    return 0;
}
