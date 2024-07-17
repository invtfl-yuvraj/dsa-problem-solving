#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int minimumChairs(string s) {
        int count = 0;
        int currentChairs = 0;

        for (char c : s) {
            if (c == 'E') {
                currentChairs++;
                if (currentChairs > count) {
                    count = currentChairs;
                }
            } else if (c == 'L') {
                currentChairs--;
            }
        }

        return count;
    }
};