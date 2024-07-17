#include <vector>
#include <iostream>
using namespace std;

bool isDivisible999(string N)
{
    //code here
    
    int ans = 0;
    
    for(int i=0;i<N.size();i++)
    {
        ans=ans*10+(N[i]-'0');
    }
    if(ans%999==0){
        return true;
    }
    else{
        return false;
    }
    
}