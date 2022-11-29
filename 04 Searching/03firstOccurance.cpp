#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    int arr[1000];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the " << n << " elements of array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the key element to search: ";
    cin >> key;
    cout << key << " is present first at index " << firstOccurance(arr, n, key);
    return 0;
}