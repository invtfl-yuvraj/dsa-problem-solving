#include <vector>
#include <iostream>
using namespace std;  

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
        vector<int> arr;
        int index = 0;
        
        int i =0;
        while (index <= n){
            if (a[index]<a[i]){
                index = i;
            }
            i++;
            if (i==n){
                arr.push_back(a[index]);
                index++;
                i = index;
                
            }
        }
        return arr;
    }
};