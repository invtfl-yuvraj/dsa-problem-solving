#include <vector>
#include <iostream>
#include <set>

using namespace std;

int * Rearrange(int *arr,int n){
    // Complete the function
    
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(st.find(i)!=st.end()){
            arr[i]=i;
            st.erase(i);
        }
        else{
            arr[i]=-1;
        }
    }
    return arr;
}