class Solution {
public:
    int subtractProductAndSum(int n) {

        int prod = 1, sum = 0;

        while (n != 0) {
            int digit = n % 10;
            sum += digit;
            prod *= digit;
            n = n / 10;
        }

        return (prod - sum);
    }
};