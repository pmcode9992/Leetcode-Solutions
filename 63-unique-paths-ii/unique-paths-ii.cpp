class Solution {
public:
    // int f(int i, int j , int rows, int cols, vector<vector<int>>& obstacleGrid){
    //     if(i < 0 || j<0 || i ==rows || j == cols || obstacleGrid[i][j] == 1){
    //         return 0;
    //     }
    //     if(i == 0 && j == 0){
    //         return 1;
    //     }
    //     int count = 0;
    //     count += f(i-1, j, rows, cols, obstacleGrid) + f(i, j-1, rows, cols, obstacleGrid);
    //     return count;
    // }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows = obstacleGrid.size();
        int cols = obstacleGrid[0].size();
        if(obstacleGrid[0][0] == 1){return 0;}
        vector<vector<int>> dp(rows, vector<int> (cols, 0));
        for(int i = 0; i < rows;i++){
            for(int j = 0;j < cols;j++){
                if(i == 0 && j == 0){dp[i][j] = 1;}
                if(i > 0 && obstacleGrid[i][j] == 0){dp[i][j] += dp[i-1][j];}
                if(j > 0 && obstacleGrid[i][j] == 0){dp[i][j] += dp[i][j-1];}
            }
        }
        return dp[rows-1][cols-1];
    }
};