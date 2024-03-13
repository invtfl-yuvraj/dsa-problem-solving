
#include <iostream>
using namespace std;

//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	    int index = 0;
	    for(int i=0;i<n;i++) {
	        if(arr[i]!=0) {
	            swap(arr[i],arr[index]);
	            index++;
	        }
	    }
	    
	}
};