#include <vector>
#include <iostream>
using namespace std;


class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        
        int result = 0;
        int n = A.size();

        for (int i = 0; i < n; i++)
        {
            if (tolower(A[i]) == tolower(B[i]))
            {
                result++;
            }
        }

        return result;
    }
};