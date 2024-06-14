#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        
        int sum = 0;
        int total = n;
        
        while (total > 0){
            int digit = total % 10;
            sum += digit*digit*digit;
            total /= 10;
        }
        
        if (sum == n){
            return "true";
        }
        
        return "false";
    }
};
