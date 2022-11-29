#include <iostream>
using namespace std;

// function to search element in 2D array
bool isPresent(int arr[][3], int target, int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {

            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
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

    int search;
    cout << "Enter the element to be searched: ";
    cin >> search;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl
         << isPresent(arr, search, 3, 3);
    return 0;
}