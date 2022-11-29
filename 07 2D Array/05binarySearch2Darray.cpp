#include <bits/stdc++.h>
using namespace std;

/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
*/

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        // mid/col == row
        // mid % col == col
        if (matrix[mid / col][mid % col] == target)
        {
            return true;
        }
        else if (matrix[mid / col][mid % col] > target)
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + (end - start) / 2;
    }

    return false;
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

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    cout << "Array is:\n";
    for (int row = 0; row < mRow; row++)
    {
        for (int col = 0; col < mCol; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "Output: " << searchMatrix(arr, target);
    return 0;
}