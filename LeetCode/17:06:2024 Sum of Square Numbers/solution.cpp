#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    bool judgeSquareSum(int c) {

        long long int l = 0;
        long long int r = sqrt(c);

        if (c == 0 || c == 1){
            return true;
        }

        while (l <= r) {

            if (l*l + r*r == c) {
                return true;
            } else if (l*l > c) {
                return false;
            } else if (l*l + r*r > c){
                r--;
            }
            else {
                l++;
            }
        }
        return false;
    }
};