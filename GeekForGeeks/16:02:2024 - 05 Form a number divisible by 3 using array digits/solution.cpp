// Form a number divisible by 3 using array digits
// You will be given an array arr of integers of length N. You can construct an integer from two integers by treating the integers as strings and then concatenating them. For example, 19 and 4 can be used to construct 194 and 419.
// The task is to find whether it’s possible to construct an integer using all the digits of these numbers such that it would be divisible by 3. If it is possible, then print 1; if not, print 0.

// Initial template for C++

#include <vector>
#include <iostream>
using namespace std;

// Code for Geek for Geeks start here ......

class Solution
{
public:
    int isPossible(int N, int arr[])
    {
        // code here
        long long result = 0;
        // int sum;
        for (int i = 0; i < N; i++)
        {
            result += arr[i];
        }

        if (result % 3 == 0)
        {
            return 1;
        }
        return 0;
    }
};

// Code for Geek for Geeks ends here ......

// Addition code to run file on Vscode starts here ..........

int main()
{

    int N;
    cout << "Enter size of array : ";
    cin >> N;
    int arr[N];
    cout << "Enter elements of array (seperated by space) : ";
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    Solution ob;
    cout << "Ans : " ;
    cout << ob.isPossible(N, arr) << endl;

    return 0;
}
