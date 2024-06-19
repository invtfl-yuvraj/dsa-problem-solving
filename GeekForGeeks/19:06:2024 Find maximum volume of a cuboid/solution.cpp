#include <vector>
#include <iostream>
using namespace std;



class Solution {
  public:
    double maxVolume(double perimeter, double area) {
        // code here
        
        double p = perimeter;
        double a = area;
       
        double len = (p/2 - sqrt(p * p/4 - 6*a))/6;
        double ans = len * len * (p/4-2 * len);
       
       return ans;
    }
};