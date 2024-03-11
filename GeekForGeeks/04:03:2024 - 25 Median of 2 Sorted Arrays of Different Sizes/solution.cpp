#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        
        int size = array1.size() + array2.size();
        int mid;
        
        if(size %2 ==0){
            mid = size/2;
        }
        else {
            mid = (size-1)/2;
        }
        
        int count =0;
        int i=0;
        int j=0;
        
        vector<int> vec(mid+1);
        
        while(count <= mid){
            
            if (i >= array1.size()){
                vec[count] = array2[j];
                j++;
            }
            else if (j >= array2.size()){
                vec[count] = array1[i];
                i++;
            }
            
            else if (array1[i]<=array2[j]){
                vec[count] = array1[i];
                i++;
                
            }
            else if (array1[i]>=array2[j]){
                vec[count] = array2[j];
                j++;
                
            }
            count++;
        }
        
        if (size%2 != 0){
            return vec[mid];
        }
        else {
            return double((vec[mid] + vec[mid-1])/2.0);
        }
        
        
        
    }
};