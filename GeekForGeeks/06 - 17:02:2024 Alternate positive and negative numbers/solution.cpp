// Alternate Positive and Negative Numbers
// Given an unsorted array `arr` of `N` positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.

// Initial template for C++

#include <vector>
#include <iostream>
using namespace std;

// Code for Geek for Geeks start here ......

class Solution
{
public:
    void rearrange(int arr[], int n)
    {

        int pos = 0;
        int neg = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }

        int arr2[pos];
        int arr3[neg];

        int k = 0;
        int l = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                arr2[k] = arr[i];
                k++;
            }
            else
            {
                arr3[l] = arr[i];
                l++;
            }
        }

        k = 0;
        l = 0;

        bool positive = true;

        if (pos == 0)
        {
            positive = false;
        }

        for (int j = 0; j < n; j++)
        {
            if (positive == true)
            {
                arr[j] = arr2[k];
                k++;
                if (l <= neg - 1)
                {
                    positive = false;
                }
            }
            else
            {
                arr[j] = arr3[l];
                l++;
                if (k <= pos - 1)
                {
                    positive = true;
                }
            }
        }
    }
};

// Code for Geek for Geeks ends here ......

// Addition code to run file on Vscode starts here ..........

int main()
{
    int n, i;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array (seperated by space) : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    ob.rearrange(arr, n);
    cout << "Ans : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
