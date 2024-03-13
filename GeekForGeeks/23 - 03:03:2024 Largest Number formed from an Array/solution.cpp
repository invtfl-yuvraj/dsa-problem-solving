#include <vector>
#include <iostream>
using namespace std;

class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	static bool customSort(string a, string b) {
        return (a + b) > (b + a);
    }
    
    string printLargest(int n, vector<string>& arr) {
        sort(arr.begin(), arr.end(), customSort);
        string result = "";
        for (const string& s : arr) {
            result += s;
        }

        return result;
    }
};