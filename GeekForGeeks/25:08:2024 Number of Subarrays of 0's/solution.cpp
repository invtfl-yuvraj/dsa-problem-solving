
#include <vector>
#include <iostream>
using namespace std;

long long int no_of_subarrays(int n, vector<int> &arr) {
    // Write your code here.
    long long int count = 0;
    
    int i = 0, j = 0;
    
    while(i<n && j<n)
    {
        if(arr[j] == 0)
        {
            count += j - i + 1;
            j++;
        }
        else 
        {
            j++;
            i = j;
        }
    }
    return count;
}