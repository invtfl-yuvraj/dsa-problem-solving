#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{
    public:
    int maxDiffIndex(int A[], int N)
    {
      unordered_map<int,int>m;
      int count=0;
      for(int i=0;i<N;i++)
      {
          int key=A[i];
          if(m.find(key)==m.end())
          {
              m[key]=i;
          }
          else
          {
              int k=i-m[key];
              count=max(count,k);
          }
      }
      return count;
        
    }
};