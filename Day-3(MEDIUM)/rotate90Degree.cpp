You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to 
modify the input 2D matrix directly. DO NOT allocate another 2D 
matrix and do the rotation.

(( vector<vector<int>> matrix(m, vector<int>(n)); ))
Vector<int> is like a dynamic 1D array
vector<vector<int>> is like a dynamic 2D array
m is row n is column byt this method you can use reverse() function

////Solution///
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        //  Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //  Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }//void so no return
};

*****Code blocks********
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; 
     // use this for c++ insted of matrix[][]
    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    //row to column
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    //last column to first
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
