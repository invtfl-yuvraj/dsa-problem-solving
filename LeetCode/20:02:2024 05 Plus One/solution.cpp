#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        bool notAdded = true;
        int i = digits.size() -1;

        if (digits[i] < 9){
                digits[i]+=1;
        }
        else {
            while (notAdded) {
            if (digits[i] < 9){
                digits[i]+=1;
                notAdded = false;
            }
            else if (i == 0){
                digits[i] = 0;
                digits.insert (digits.begin(), 1);
                notAdded = false;
            }
            else {
                digits[i] = 0;
                i--;
            }
        }
    }
        
        
        return digits;
    }
};