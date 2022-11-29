#include <iostream>
using namespace std;

// to print Row wise sum
void printSum(int arr[][3], int row, int col)
{
    cout << "Printing Sum row wise -> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

// to print col wise sum
void printColSum(int arr[][3], int row, int col)
{
    cout << "Printing Sum col wise -> " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

int main()
{
    int arr[3][3];
    cout << "Enter the elements of 3x3 array: \n";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    printSum(arr, 3, 3);
    printColSum(arr, 3, 3);
    return 0;
}