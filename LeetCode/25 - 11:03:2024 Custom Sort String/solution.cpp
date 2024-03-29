#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) { 

    unordered_map<char, int> order_index; 
    for (int i = 0; i < order.length(); ++i) { 
        order_index[order[i]] = i;
    }

    sort(s.begin(), s.end(), [&](char a, char b) { 
        return order_index[a] < order_index[b];
    });

    return s; 
}

};