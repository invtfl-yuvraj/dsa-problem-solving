#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min = prices[0];
        int minIndex = 0;
        int secondMin = prices[1];

        for (int i=2; i<prices.size(); i++){
            if (prices[i]< min){
                min = prices[i];
                minIndex = i;
            }
        }

        for (int i=0; i<prices.size(); i++){
            if (prices[i]< secondMin && i != minIndex){
                secondMin = prices[i];
            }
        }

        if (min + secondMin <= money ){
            return money - min - secondMin;
        }
        else{
            return money;
        }

    }
};