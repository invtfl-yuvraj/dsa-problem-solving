#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:

    bool midForcePossible(int mid, vector<int> &position, int m){

        int prevPos = position[0];
        int ballCount = 1;

        for (int i = 1; i < position.size(); i++){
            
            int currPos = position[i];

            if (currPos - prevPos >= mid){
                ballCount++;
                prevPos = currPos;
            }

            if (ballCount == m){
                return true;
            }
        }
        return false;
    }


    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(), position.end());

        int n = position.size();

        int ans = 0;

        int minForce = 1;
        int maxForce = position[n-1] - position[0];

        while (minForce <= maxForce){

            int mid = minForce + (maxForce - minForce)/2;

            if (midForcePossible(mid, position, m)){
                ans = mid;
                minForce = mid+1;
            }
            else {
                maxForce = mid - 1;
            }
        }

        return ans;
        
    }
};