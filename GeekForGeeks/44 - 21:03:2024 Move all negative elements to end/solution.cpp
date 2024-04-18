#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
       int arr2[n];
       
       int k = 0;
       for (int i = 0; i< n; i++){
           if (arr[i] >= 0){
               arr2[k] = arr[i];
               k++;
           }
       }
       
       for (int i = 0; i<n; i++){
           if (arr[i] < 0){
               arr2[k] = arr[i];
               k++;
           }
       }
       
       for (int i = 0; i<n; i++){
           arr[i] = arr2[i];
       }
    }
};