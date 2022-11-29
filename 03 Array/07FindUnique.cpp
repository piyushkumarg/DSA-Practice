#include <iostream>
using namespace std;

/*
CodeStudio Question: Find Unique
https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0

*/

int findUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    int arr[1000];
    cout << "Enter the size of array(odd only): ";
    cin >> n;

    cout << "Enter the " << n << " elements of array between 1 to " << n - 1 << " all elements are repeat twice except one.\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    return 0;
}