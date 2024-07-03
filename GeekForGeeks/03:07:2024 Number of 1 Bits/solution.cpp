class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        
        int count = 0;
        
        while (N > 0){
            int last_digit = N & 1;
            
            count += last_digit;
            
            N = N >> 1;
        }
        
        return count;
    }
};