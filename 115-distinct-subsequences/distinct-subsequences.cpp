class Solution {
public:
    int f(int i, int j, string s, string t, vector<vector<int>> &dp){
        if(j==0){
            return 1;
        }
        if(i == 0){
            return 0;
        }
        int take = 0;
        int notTake = 0;
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(s[i - 1] == t [j -1]){
            //match
            take = f(i-1, j-1, s , t, dp);
            notTake = f(i-1, j , s, t, dp);
        }
        else{
            //no match
            return dp[i][j] = f(i-1, j, s, t, dp);
        }
        return dp[i][j] = take + notTake;
    }
    int numDistinct(string s, string t) {
        int n = s.length();
        int m = t.length();
        vector<vector<int>> dp(n+ 1, vector<int> (m + 1, -1));
        return f(s.length(), t.length(), s, t, dp);
    }
};