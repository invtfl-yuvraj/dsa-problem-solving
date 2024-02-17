// Sort an array of 0s, 1s and 2s
// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


// Initial template for C++

#include <vector>
#include <iostream>
using namespace std;




// Code for Geek for Geeks start here ......
class Solution
{
public:
    void sort012(int a[], int n)
    {

        int key = 0;
        for (int i = key; i < n; i++)
        {
            if (a[i] == 0)
            {
                swap(a[i], a[key]);
                key++;
            }
        }
        for (int i = key; i < n; i++)
        {
            if (a[i] == 1)
            {
                swap(a[i], a[key]);
                key++;
            }
        }
        for (int i = key; i < n; i++)
        {
            if (a[i] == 2)
            {
                swap(a[i], a[key]);
                key++;
            }
        }
    }
};

// Code for Geek for Geeks ends here ......




// Addition code to run file on Vscode starts here ..........

int main()
{

    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter elements of array (seperated by space) : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Solution ob;
    ob.sort012(a, n);

    cout << "Ans : " ;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}




