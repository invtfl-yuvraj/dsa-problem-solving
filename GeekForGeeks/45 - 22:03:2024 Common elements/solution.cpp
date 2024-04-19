#include <vector>
#include <iostream>
using namespace std;

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector <int> vec;
            vector <int> res;
            int k = 0;
            
            for (int i = 0; i < n1; i++){
                vec.push_back(A[i]);
                while (i < n1 -1 && A[i] == A[i + 1]) {
                        i++;
                    }
            }
            
            for (int i = 0; i < n2; i++){
                vec.push_back(B[i]);
                while (i < n2 -1 && B[i] == B[i + 1]) {
                        i++;
                    }
            }
            
            for (int i = 0; i < n3; i++){
                vec.push_back(C[i]);
                while (i < n3 -1 && C[i] == C[i + 1]) {
                        i++;
                    }
            }
            
            sort(vec.begin(), vec.end());
            
            for (int i = 0; i < vec.size()-2; i++){
                if (vec[i] == vec[i+1] && vec[i] == vec[i+2]){
                    res.push_back(vec[i]);
                    
                    while (i < vec.size() - 1 && vec[i] == vec[i + 1]) {
                        i++;
                    }
                }
            }
            
            return res;
        }

};