#include <vector>
#include <iostream>
using namespace std;

//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int max = arr[0];
	    int secmax = -1;
	    
	    for (int i = 0; i<n; i++){
	        if (arr[i]>max){
	            max = arr[i];
	        }
	    }
	    
	    for (int i = 0; i<n ; i++){
	        if (arr[i]>secmax && arr[i] != max){
	            secmax = arr[i];
	        }
	    }
	    
	    return secmax;
	}
};
