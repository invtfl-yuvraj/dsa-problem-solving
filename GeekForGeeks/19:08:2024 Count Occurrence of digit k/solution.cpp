
#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    int num(int k, vector<int>& arr) {
        // Code here
        int countk=0;
        
        for(int value:arr){
            do{
                if(value%10 == k)
                    countk++;
                value/=10;
            }while(value!=0);
        }
        return  countk;
    }
};