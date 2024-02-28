class Solution {
public:
    int fib(int n) {
        int start =0;
        int next =1;
        int count =1;

        if (n==0){
            return start;
        }
        else if (n==1){
            return next;
        }
        else {
            for (int i=0; i<n-1; i++){
                count = start + next;
                start = next;
                next = count; 
            }
        }

        return count;
    }
};