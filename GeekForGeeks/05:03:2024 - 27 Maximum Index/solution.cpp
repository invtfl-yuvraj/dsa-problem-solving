#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        int i =0;
        int j = n-1;
        int maxdiff = 0;
        
        while (i<=j){
            if(a[i] <= a[j]){
                if ((j-i) > maxdiff){
                    maxdiff = j-i;
                }
                i++;
                j = n-1;
            }
            else {
                j--;
            }
        }
        
        return maxdiff;
    }
};