class Solution {
public:
    int f(int index, bool buy, vector<int> &prices, vector<vector<int>> &dp){
        if(index >= prices.size()){
            return 0;
        }
        if(dp[index][buy]!=-1){
            return dp[index][buy];
        }
        int take = 0;
        int notTake = 0;
        if(buy){
            take = -prices[index] + f(index + 1, 0, prices, dp);
            notTake = f(index + 1, 1 , prices, dp);
        }
        else{
            take = prices[index] + f(index + 2, 1, prices, dp);
            notTake = f(index + 1, 0, prices, dp);
        }
        return dp[index][buy] = max(take, notTake);
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int> (2, -1));
        return f(0, 1, prices, dp);
    }
};