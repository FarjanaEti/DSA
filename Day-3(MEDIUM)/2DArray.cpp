You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.
  
*****solution*****
 for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == target) return true;
            }
        }
        return false;

BUT IF You must write a solution in O(log(m * n)) time complexity.

*****solution******
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();        // number of rows =3
        int n = matrix[0].size();     // number of columns=4

        //Total elements: m * n = 3 * 4 = 12
        int left = 0; //0
        int right = m * n - 1;//11
       //thinking 2D array as 1D from 0 to 11 then perform binary search

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int row = mid / n; //5/4=1
            int col = mid % n; //5%4=1

            int midValue = matrix[row][col];//[1][1]=11

            if (midValue == target) return true;
            else if (midValue < target) left = mid + 1;//update new left
            else right = mid - 1;
        }

        return false;
    }
};
