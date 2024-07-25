class Solution {
public:
    int f(int i, int j, string& text1, string& text2, vector<vector<int>>& dp) {
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if( i == 0 || j == 0){return dp[i][j] = 0;}
        
        if (text1[i - 1] == text2[j - 1]) {
            return dp[i][j] = 1 + f(i - 1, j - 1, text1, text2, dp);
        } 
        return dp[i][j] = max(f(i - 1, j, text1, text2, dp),
                           f(i, j - 1, text1, text2, dp));
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        vector<vector<int>> dp(n + 1, vector<int>( m + 1, -1));
        // for (int i = 0; i <= n; i++) {
        //     dp[i][0] = 0;
        // }
        // for (int i = 0; i <= m; i++) {
        //     dp[0][m] = 0;
        // }
        f(n, m, text1, text2, dp);
        return dp[n][m];
    }
};