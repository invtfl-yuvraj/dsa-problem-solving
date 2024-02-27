#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> vect1(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),
              vect1.begin());

        sort(vect1.begin(), vect1.end());

        if (vect1.size() %2 ==0){
            int mid = vect1.size()/ 2;
            return (vect1[mid] + vect1[mid -1])/2.0;
        }
        else {
            int mid = (vect1.size() -1) / 2;
            return vect1[mid];
        }

    }
};