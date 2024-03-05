class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int countZero = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            countZero++;
        }
    }


    for (int i = 0; i < countZero; i++) {
        arr[i] = 0;
    }

    for (int i = countZero; i < n; i++) {
        arr[i] = 1;
    }
    }
};