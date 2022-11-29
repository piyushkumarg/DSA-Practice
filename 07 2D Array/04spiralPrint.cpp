#include <bits/stdc++.h>
using namespace std;
/*
Given an m x n matrix, return all elements of the matrix in spiral order.
Example 1:

Input: matrix = [[1,2,3],
                [4,5,6],
                [7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
*/

// function to print like spiral:
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // for starting row
        for (int i = startingCol; count < total && i <= endingCol; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // for ending column;
        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        // for ending row
        for (int i = endingCol; count < total && i >= startingCol; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // for starting column
        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
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
    ans = spiralOrder(arr);
    cout << "\nSine wave Output:\n";
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}