// Kth Smallest Element
// Given an array arr[] and an integer K where K is smaller than the size of the array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct. 

// Initial template for C++

#include <vector>
#include <iostream>
using namespace std;





// Code for Geek for Geeks start here ......

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    
    int L[n1];
    int R[n2];
    
    int i,j,k ;
    
    for (i = 0; i<n1; i++){
        L[i] = arr[l+i];
    }
    
    for (j = 0; j<n2; j++){
        R[j] = arr[mid + 1 + j];
    }
    
    i=0;
    j=0;
    k=l;
    
    while (i<n1 && j<n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
    
}

void mergeSort(int arr[], int l, int r){
    
    if (l>=r){
        return ;
    }
    
    int mid = l + (r-l)/2;
    
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    
    merge(arr, l, mid, r);
    
}

    
    int kthSmallest(int arr[], int l, int r, int k) {
        mergeSort(arr, l, r);
        
        return arr[k-1];
    }
};


// Code for Geek for Geeks ends here ......





// Addition code to run file on Vscode starts here ..........
 
int main()
{

    int number_of_elements;
    cout << "Enter size of array : ";
    cin>>number_of_elements;
    int a[number_of_elements];
    
    cout << "Enter elements of array (seperated by space) : ";
    for(int i=0;i<number_of_elements;i++)
    cin>>a[i];
            
    int k;
    cout << "Enter value of K : ";
    cin>>k;
    Solution ob;
    cout << "Ans : " ;
    cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    return 0;
}
