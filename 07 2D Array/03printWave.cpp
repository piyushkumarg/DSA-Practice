#include <bits/stdc++.h>
using namespace std;
/*
For a given 2D array of size NxM print the arr in a sine wave
Example:
Input:
1 2 3 4
5 6 7 8
9 10 11 12

Output: 1 5 9 10 6 2 3 7 11 12 8 4
*/

// function to print like sine wave:
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> v;
    for (int col = 0; col < mCols; col++)
    {
        if (col & 1)
        {
            for (int row = nRows - 1; row >= 0; row--)
                v.push_back(arr[row][col]);
        }
        else
        {
            for (int row = 0; row < nRows; row++)
                v.push_back(arr[row][col]);
        }
    }
    return v;
}

int main()
{
    vector<vector<int>> arr;
    int mRow, mCol;
    cout << " Enter row and col: ";
    cin >> mRow >> mCol;
    cout << "Enter the elements of" << mRow << "x" << mCol << " array: \n";
    for (int row = 0; row < mRow; row++)
    {
        vector<int> temp;
        for (int col = 0; col < mCol; col++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }

    cout << "Array is:\n";
    for (int row = 0; row < mRow; row++)
    {
        for (int col = 0; col < mCol; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    vector<int> ans;
    ans = wavePrint(arr, mRow, mCol);
    cout << "\nSine wave Output:\n";
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}