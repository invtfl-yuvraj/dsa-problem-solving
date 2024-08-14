#include <vector>
#include <iostream>
using namespace std;

int Count(string S){
    //complete the function here
    
    int count=0;
    for( int i=0; i<S.size(); i++)
    {
        if((S[i]>= 'a' && S[i]<='z') || (S[i]>= 'A' && S[i]<='Z') )
        count++;
    }
    return count;
}