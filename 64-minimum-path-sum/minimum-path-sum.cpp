class Solution {
public:
    int f(int i, int j, int rows, int cols, vector<vector<int>> &grid){
        if(i <0 || j< 0 || i == rows || j == cols){
            return 201;
        }
        if(i == 0 && j == 0){
            return grid[0][0];
        }
        return grid[i][j] + min(f(i-1, j, rows, cols, grid), f(i, j-1, rows, cols, grid));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> dp(rows, vector<int> (cols, 0));
        for(int i= 0;i< rows;i++){
            for(int j = 0 ; j< cols;j++){
                if(i == 0 && j == 0){dp[i][j] = grid[0][0];}
                else{
                    if(i > 0 && j > 0)dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
                    else if(i > 0){ dp[i][j] = grid[i][j] + dp[i-1][j];}
                    else if(j > 0){ dp[i][j] = grid[i][j] + dp[i][j-1];}
                }
            }
        }
        return dp[rows - 1 ][cols - 1];
    }
};