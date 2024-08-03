class Solution {
public:
    int f(int row, int col, vector<vector<int>> &triangle, vector<vector<int>> &dp){
        if(row == 0){
            
            return dp[0][0] = triangle[0][0] + min(f(1, 0, triangle, dp), f(1, 1, triangle, dp));
        }
        if(row == triangle.size()){
            return 0;
        }
        if(dp[row][col] != -1){
            return dp[row][col];
        }
        return dp[row][col] = triangle[row][col] + min(f(row + 1, col, triangle, dp),f(row + 1, col + 1, triangle, dp));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(), vector<int> (triangle.size(), -1));
        return f(0,0, triangle, dp);
    }
};