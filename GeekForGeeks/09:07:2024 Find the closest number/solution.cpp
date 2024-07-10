#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        
        int l = 0;
        int r = n-1;
        int target = k;
        
        while (l<=r){
            int mid = l + (r-l)/2;
            
            if (target >= arr[mid] && target <= arr[mid+1]){
                
                while(arr[mid] == arr[mid+1]){
                    mid++;
                }
                
                if(target - arr[mid] >= arr[mid+1] - target){
                    return arr[mid+1];
                }
                else {
                    return arr[mid];
                }
            }
            else if (target > arr[mid]){
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }
    } 
};