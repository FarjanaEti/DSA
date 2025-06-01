#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n; // rows and columns
    vector<vector<int>> matrix(m, vector<int>(n));

    // Input the matrix
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    vector<int> result;

    int top = 0, bottom = m - 1;//bottom=2
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Go left to right
        for (int i = left; i <= right; i++)
            result.push_back(matrix[top][i]);
        top++;//1 2 3

        // Go top to bottom
        for (int i = top; i <= bottom; i++)
            result.push_back(matrix[i][right]);
        right--;//6 9

        // Go right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                result.push_back(matrix[bottom][i]);
            bottom--;//7 8
        }

        // Go bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                result.push_back(matrix[i][left]);
            left++;//4
        }
    }

    // Print result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }

    return 0;
}
