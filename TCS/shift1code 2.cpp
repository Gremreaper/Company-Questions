#include<iostream>
#include<vector>
using namespace std;

int solve(vector<vector<int>>& dp, vector<vector<int>>& arr, int m, int n, int row, int col) {
    // If out of bounds or on an obstacle, return 0
    if (row >= m || col >= n || arr[row][col] == 1) return 0;
    
    // If reached the bottom-right cell, count it as a valid path
    if (row == m - 1 && col == n - 1) return 1;

    // If already computed, return the cached result
    if (dp[row][col] != -1) return dp[row][col];

    // Explore right and down paths
    int right = solve(dp, arr, m, n, row, col + 1);
    int down = solve(dp, arr, m, n, row + 1, col);

    return dp[row][col] = right + down;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];  // Read grid values
        }
    }

    vector<vector<int>> dp(m, vector<int>(n, -1));
    int res = solve(dp, arr, m, n, 0, 0);

    cout << res << endl;
    return 0;
}
