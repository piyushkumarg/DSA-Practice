#include <iostream>
using namespace std;

/*
codestudio questions:
https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0
*/

int findDuplicate(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i] ^ i;
    }
    return ans;
}

int main()
{
    int n;
    int arr[1000];
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the " << n << " elements of array between 1 to " << n - 1 << " only one elements are repeat twice.\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Repeated element is " << findDuplicate(arr, n);
    return 0;
}