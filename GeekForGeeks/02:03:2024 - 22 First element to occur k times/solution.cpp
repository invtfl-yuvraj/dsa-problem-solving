/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       int peak = arr[0];
       int index = 0;
       int index2 =0;
       
       for (int i =1; i<n; i++){
           if (peak<arr[i]){
               peak = arr[i];
               index2 = i;
           }
           else if (peak == arr[i]){
               index = i;
           }
           
       }
       
       if (index>index2){
           return index;
       }
       else{
           return index2;
       }
    }
};