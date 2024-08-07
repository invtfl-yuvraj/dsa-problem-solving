#include <vector>
#include <iostream>
using namespace std;

long long evenNumSubstring(string S){
    //complete the function here
    int n=S.size();
    int i=0;
    long long count=0;
    while(i<n) {
       int x=S[i]-'0';
       if(x%2==0) {
           count=count+(i+1);
       }
       i++;
    }
    return count ;
}