// Recursive Sequence
// A function F is defined as follows F(n)= (1) +(2*3) + (4*5*6) ... upto n terms (look at the examples for better clarity). Given an integer n, determine the F(n).

// Initial template for C++

#include <vector>
#include <iostream>
using namespace std;





// Code for Geek for Geeks start here ......

class Solution
{
public:
    long long sequence(int n)
    {

        long long sum = 0;
        int count = 1;
        const int modulo = 1000000007;

        for (int i = 1; i < n + 1; i++)
        {
            long long innerMul = 1;
            for (int j = 0; j < i; j++)
            {
                innerMul = (innerMul * count) % modulo;
                count++;
            }
            sum = (innerMul + sum) % modulo;
        }

        sum = sum % modulo;

        return sum;
    }
};

// Code for Geek for Geeks ends here ......





// Addition code to run file on Vscode starts here ..........

int main()
{
    int N;
    cout << "Enter num : ";
    cin >> N;

    Solution ob;
    cout << "Ans : ";
    cout << ob.sequence(N) << endl;
    return 0;
}
