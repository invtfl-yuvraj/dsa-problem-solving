#include <vector>
#include <iostream>
using namespace std;

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int count = 0;
        int counter = 0;
        
        for (int i = 0; i < size ; i++){
            if (count == 0){
                counter = a[i];
                count++;
            }
            else {
                if (a[i] == counter){
                    count++;
                }
                else {
                    count--;
                }
            }
        }
        
        count = 0;
        for (int i =0; i<size ; i++){
            if (a[i] == counter){
                count++;
            }
        }
        
        if (count > size/2){
            return counter;
        }
        return -1;
    }
};